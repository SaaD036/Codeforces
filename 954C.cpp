#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, d=1;
    cin>>n;
    int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];

        if(i>0){
            d = max(d, abs(a[i] - a[i-1]));
        }
    }

    for(int i=1; i<n; i++){
        if(abs(a[i]-a[i-1])!=1 && abs(a[i]-a[i-1])!=d){
            cout<<"NO";
            return 0;
        }
        if(abs(a[i]-a[i-1])==1 && d!=1){
            if(a[i]%d==1 && a[i-1]+1==a[i]){
                cout<<"NO";
                return 0;
            }
            else if(a[i]%d==0 && a[i]+1==a[i-1]){
                cout<<"NO";
                return 0;
            }
        }
    }

    cout<<"YES"<<endl<<"1000000000 "<<d;

    return 0;
}
