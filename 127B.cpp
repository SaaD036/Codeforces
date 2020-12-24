#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, res=0;
    cin>>n;
    int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a, a+n);

    for(int i=1; i<n; i++){
        if(a[i]==a[i-1]){
            res++;
            a[i]=0;
        }
    }

    cout<<res/2;

    return 0;
}
