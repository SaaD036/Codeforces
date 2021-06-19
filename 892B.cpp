#include <iostream>
using namespace std;

int minimum(int a, int b){
    if(a<b){
        return a;
    }
    return b;
}

int main(){
    int n, result=1, min_val;
    cin>>n;
    int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    min_val = n-a[n-1]-1;

    for(int i=n-2; i>=0; i--){
        if(i<min_val){
            result++;
        }
        min_val = minimum(min_val, i-a[i]);
    }

    cout<<result;

    return 0;
}
