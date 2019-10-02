#include <iostream>
using namespace std;

int main(){
    int b, g, n, res=0;
    cin>>b>>g>>n;

    for(int i=0,j=n; i<=n; i++,j--){
        if((i<=b && j<=g) && (i+j==n)){
            res++;
        }
    }

    cout<<res;

    return 0;
}