#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, l=-1000000000, r=1000000000;
    cin>>n;
    int a[n];
    char b[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cin>>b;

    for(int i=4; i<n; i++){
        if(b[i]=='0' && b[i-1]=='1'){
            for(int j=i-4;j<=i;j++){
				r = min(r, a[j]-1);
			}
        }
        else if(b[i]=='1' && b[i-1]=='0'){
            for(int j=i-4;j<=i;j++){
				l = max(l, a[j]+1);
			}
        }
    }

    cout<<l<<" "<<r;

    return 0;
}
