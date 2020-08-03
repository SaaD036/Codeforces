#include <iostream>
using namespace std;

int main(){
    int n, x, a, sum=0;
    cin>>n>>x;

    for(int i=0; i<n; i++){
        cin>>a;
        sum += a;
    }

    if(sum+n-1 == x){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    return 0;
}
