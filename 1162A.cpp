#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, h, m;
    cin>>n>>h>>m;
    int dollar[n], result=0;

    for(int i=0; i<n; i++){
        dollar[i] = h*h;
    }

    for(int i=0; i<m; i++){
        int l, r, x;
        cin>>l>>r>>x;

        for(int j=l-1; j<r; j++){
            if(dollar[j] > x*x){
               dollar[j] = x*x;
            }
        }
    }

    for(int i=0; i<n; i++){
        result += dollar[i];
    }

    cout<<result;

    return 0;
}
