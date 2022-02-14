#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int res[t];

    for(int i=0; i<t; i++){
        int n, mn=1000000001, mx=0, tmp;
        cin>>n;

        for(int j=0; j<n; j++){
            cin>>tmp;
            mn=min(mn, tmp);
            mx=max(mx, tmp);
        }
        res[i] = mx-mn;
    }

    for(int i=0; i<t; i++){
        cout<<res[i]<<endl;
    }

    return 0;
}
