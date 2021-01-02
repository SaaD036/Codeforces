#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

int main(){
    char a[100], b[100], c[]={'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U', 'y', 'Y'};
    gets(a);
    int len_a = strlen(a), len_b=0;

    for(int i=0; i<len_a; i++){
        if( (a[i]>='A'&&a[i]<='Z') || (a[i]>='a'&&a[i]<='z') ){
            b[len_b] = a[i];
            len_b++;
        }
    }

    if(len_b==1){
        bool flag = false;

        for(int i=0; i<10; i++){
            if(b[len_b-1] == c[i]){
                flag = true;
                break;
            }
        }

        if(flag){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
    else{
        bool flag = false;

        for(int i=0; i<12; i++){
            if(b[len_b-1] == c[i]){
                flag = true;
                break;
            }
        }

        if(flag){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }

    return 0;
}
