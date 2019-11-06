#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char a[200];
    cin>>a;

    int n = strlen(a), i=0;

    while(i<n){
        if(a[i] == '.'){
            cout<<"0";
            i++;
        }
        else if(a[i] == '-'){
            if(a[i+1] == '.'){
                cout<<"1";
            }
            else if(a[i+1] == '-'){
                cout<<"2";
            }
            i = i+2;
        }
    }

    return 0;
}
