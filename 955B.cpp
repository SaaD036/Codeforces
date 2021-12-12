#include <bits/stdc++.h>
using namespace std;

int charFreq(char* a, int len){
    int res=1;

    for(int i=1; i<len; i++){
        if(a[i] != a[i-1]){
            res++;
        }
    }

    return res;
}

int main(){
    char s[100000];
    cin>>s;
    int n = strlen(s);

    sort(s, s+n);

    if(charFreq(s, n)>4 || charFreq(s, n)<2){
        cout<<"No";
    }
    else if(charFreq(s, n) == 2){
        int a=1, b;

        for(int i=1; s[i]==s[0]; i++){
            a++;
        }
        b = n-a;

        if(a>1 && b>1){
            cout<<"Yes";
        }
        else{
            cout<<"No";
        }
    }
    else if(charFreq(s, n) == 3){
        if(n > 3){
            cout<<"Yes";
        }
        else{
            cout<<"No";
        }
    }
    else if(charFreq(s, n) == 4){
        cout<<"Yes";
    }

    return 0;
}
