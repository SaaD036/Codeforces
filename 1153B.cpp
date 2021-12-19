#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, h;
    cin>>n>>m>>h;
    int a[m], b[n], t[n][m];

    for(int i=0; i<m; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        cin>>b[i];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>t[i][j];

            if(t[i][j] > 0){
                t[i][j] = min(a[j], b[i]);
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
