#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b, len;
    cin>>n>>a>>b;
    string s;
    cin>>s;
    len = s.length();
    int res[n];

    if(n*a>len || n*b<len){
        cout<<"No solution";
        return 0;
    }

    for(int i=0; i<n; i++) res[i] = len/n;

    for(int i=1; i<=len%n; i++) res[i-1]++;

    int tot=0;
    for(int i=0, j=0; i<len; i++){
        if(tot+res[j] == i){
            tot += res[j];
            j++;
            cout<<endl;
        }

        cout<<s[i];
    }

    return 0;
}
