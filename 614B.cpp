#include <bits/stdc++.h>
using namespace std;

bool isBeautiful(string s, int l, int r){
    int one=0;

    for(int i=l; i<=r; i++){
        if(s[i]!='0' && s[i]!='1') return false;

        if(s[i] == '1') one++;
    }

    if(one > 1) return false;

    return true;
}

int getZero(string s, int l, int r){
    int zero=0, one=0;

    for(int i=l; i<=r; i++){
        if(s[i] == '0') zero++;
        if(s[i] == '1') one++;
    }

    if(one>0) return zero;
    else return 0;
}

int isZero(string s, int l, int r){
    int one=0;

    for(int i=l; i<=r; i++){
        if(s[i] == '1') one++;
    }

    if(one>0) return false;

    return true;
}

int main(){
    int n, len, totalZero=0;
    cin>>n;
    string s[n], x="1";

    for(int i=0; i<n; i++){
        cin>>s[i];
    }
    for(int i=0; i<n; i++){
        if(isBeautiful(s[i], 0, s[i].length()-1)){
            if(isZero(s[i], 0, s[i].length()-1)){
                cout<<"0";
                return 0;
            }
            else totalZero+=getZero(s[i], 0, s[i].length()-1);
        }
        else x=s[i];
    }

    cout<<x;
    for(int i=1; i<=totalZero; i++) cout<<"0";

    return 0;
}
