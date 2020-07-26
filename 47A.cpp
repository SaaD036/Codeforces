#include <iostream>
using namespace std;

int main(){
    int n, flag=0;
    cin>>n;

    for(int i=1; i<=n; i++){
        if(i*(i+1)/2 == n){
            cout<<"YES";
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        cout<<"NO";
    }

    return 0;
}
