#include <bits/stdc++.h>
using namespace std;

bool violateOrder(char* a, int n){
    for(int i=1; i<n; i++){
        if(a[i]<a[i-1]){
            return true;
        }
    }

    return false;
}

int frequency(char* a, int n, char b){
    int result=0;

    for(int i=0; i<n; i++){
        if(a[i]==b){
            result++;
        }
    }

    return result;
}

int main(){
    char s[5000];
    cin>>s;
    int n = strlen(s);

    if(violateOrder(s, n)){
        cout<<"NO";
        return 0;
    }

    if(frequency(s, n, 'c')==frequency(s, n, 'b') || frequency(s, n, 'c')==frequency(s, n, 'a')){
        if(frequency(s, n, 'b')>0 && frequency(s, n, 'a')>0){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
    else{
        cout<<"NO";
    }

    return 0;
}
