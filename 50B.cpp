#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    unsigned long long int len=s.length(), a[256]={0}, res=0;

    for(int i=0; i<len; i++) a[s[i]]++;

    for(int i=0; i<256; i++) res+=a[i]*a[i];

    cout<<res;

    return 0;
}
