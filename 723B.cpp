#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int len=0, word=0, tmp=0, n;
    cin>>n;
    char a[n];
    bool flag=true;

    cin>>a;
    if(a[0] == '('){
        flag=false;
    }

    for(int i=0; i<n; i++){
        if(a[i] == '('){
            flag = false;

            if(tmp > len){
                len=tmp;
            }
            tmp=0;
        }
        else if(a[i] == ')'){
            flag = true;

            if(tmp>0){
                word++;
            }
            tmp=0;
        }
        else if(a[i] == '_'){
            if(flag){
                if(tmp>len){
                    len=tmp;
                    //cout<<i<<"  ";
                }
            }
            else{
                if(tmp>0){
                    word++;
                }
            }
            tmp=0;
        }
        else{
            tmp++;
        }
    }

    if(a[n-1]=='_' || a[n-1]=='(' || a[n-1]==')'){

    }
    else{
        if(tmp>len){
            len=tmp;
        }
    }

    cout<<len<<" "<<word;
    return 0;
}
