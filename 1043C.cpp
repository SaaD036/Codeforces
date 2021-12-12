#include <bits/stdc++.h>
using namespace std;

int main(){
    char s[1000];
    cin>>s;
    int len = strlen(s);
    bool result[len];

    cout<<"0 ";
    for(int i=1; i<len; i++){
        if(s[i]=='a'){
            result[i - 1] ^= 1;
            result[i] = 1;
        }
        else{
            result[i] = 0;
        }
    }

    for(int i=1; i<len; i++){
        printf("%d", result[i]);
        cout<<" ";
    }

    return 0;
}
