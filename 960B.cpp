#include <bits/stdc++.h>
using namespace std;

long long int abs(long long int a, long long int b){
    if(a>b){
        return a-b;
    }
    return b-a;
}

int main(){
    int n, k1, k2, k;
    cin>>n>>k1>>k2;
    k = k1+k2;

    long long int a[n], b[n], c[n], result=0;

    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        cin>>b[i];
        c[i] = abs(a[i], b[i]);
    }

    for(int i=0; i<k; i++){
        sort(c, c+n);

        if(c[n-1] > 0){
            c[n-1]--;
        }
        else{
            c[n-1]++;
        }
    }

    for(int i=0; i<n; i++){
        result += c[i]*c[i];
    }

    cout<<result;

    return 0;
}
