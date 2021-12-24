#include <bits/stdc++.h>
using namespace std;

bool solve(string s){
    int n = s.length();

    if(n%2 == 1){
        return false;
    }

    for(int i=0, j=n/2; i<n/2; i++, j++){
        if(s[i] != s[j]){
            return false;
        }
    }

    return true;
}

int main(){
    string s;
    int t;
    cin>>t;
    bool result[t];

    for(int i=0; i<t; i++){
        cin>>s;

        result[i] = solve(s);
    }

    for(int i=0; i<t; i++){
        if(result[i]){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
