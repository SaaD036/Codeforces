#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

int main(){
    int n;
    cin>>n;
    unsigned long int l, a[n], diff=0;
    cin>>l;

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    sort(a, a+n);

    for(int i=0; i<n-1; i++){
        if(a[i+1]-a[i] > diff){
            diff = a[i+1]-a[i];
        }
    }

    float res = (float)diff/2;

    if(a[0]-0 > res){
        res = a[0]-0;
    }
    if(l-a[n-1] > res){
        res = l-a[n-1];
    }

    printf("%.10f", res);

    return 0;
}
