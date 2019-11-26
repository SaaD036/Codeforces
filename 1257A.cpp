#include <iostream>
using namespace std;

int abs(int a, int b){
    if(a>b){
        return a-b;
    }
    else{
        return b-a;
    }
}

int main(){
    int t, n, x, a, b;
    cin>>t;
    int result[t];

    for(int i=0; i<t; i++){
        cin>>n>>x>>a>>b;

        if( (x + abs(a,b)) < n){
            result[i] = abs(a,b) + x;
        }
        else{
            result[i] = n-1;
        }
    }

    for(int i=0; i<t-1; i++){
        cout<<result[i]<<endl;
    }
    cout<<result[t-1];

    return 0;
}