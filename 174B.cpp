#include <iostream>
#include <cstring>
using namespace std;

bool hasDot(char* a, int n){
    for(int i=0; i<n; i++){
        if(a[i] == '.'){
            return true;
        }
    }
    return false;
}

bool isValid(char* a, int n){
    int f_index=0, l_index=n-1, difference=0;

    if(a[0]=='.' || a[n-1]=='.'){
        return false;
    }

    while(a[f_index] != '.'){
        f_index++;
    }

    while(a[l_index] != '.'){
        l_index--;
    }

    if(f_index>8 || n-l_index>4){
        return false;
    }

    for(int i=f_index+1; i<n; i++){
        if(a[i] == '.'){
            if(difference>11 || difference<2){
                return false;
            }
            difference = 0;
        }
        else{
            difference++;
        }
    }

    return true;
}

int nextDot(char* a, int n, int current){
    for(int i=current+1; i<n; i++){
        if(a[i] == '.'){
            return i-current-1;
        }
    }
    return -1;
}

int main(){
    char a[400000];
    cin>>a;
    int len = strlen(a);


    if(!hasDot(a, len)){
        cout<<"NO";
    }
    else{
        if(!isValid(a, len)){
            cout<<"NO";
        }
        else{
            cout<<"YES"<<endl;

            for(int i=0; i<len; i++){
                if(a[i] == '.'){
                    int next = nextDot(a, len, i);

                    if(next == 11){
                        cout<<a[i]<<a[i+1]<<a[i+2]<<a[i+3];
                        i+=3;
                    }
                    else if(next == 10){
                        cout<<a[i]<<a[i+1]<<a[i+2];
                        i+=2;
                    }
                    else{
                        cout<<a[i]<<a[i+1];
                        i+=1;
                    }

                    if(next != -1){
                        cout<<endl;
                    }
                }
                else{
                    cout<<a[i];
                }
            }
        }
    }

    return 0;
}
