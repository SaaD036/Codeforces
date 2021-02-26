#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;

    if(m>=n-1 && m<=2*n+2){
        int p = (m-n-1);

        if(m==2*n+2){
            for(int i=0; i<n; i++){
                cout<<"110";
            }
            cout<<"11";
        }
        else if(m==n){
            for(int i=0; i<m; i++){
                cout<<"10";
            }
        }
        else if(m==n-1){
            cout<<"0";
            for(int i=0; i<m; i++){
                cout<<"10";
            }
        }
        else{
            for(int i=0; i<p; i++){
                cout<<"110";
            }
            for(int i=0; i<n-p; i++){
                cout<<"10";
            }
            cout<<"1";
            }
    }
    else{
        cout<<"-1";
    }

    return 0;
}
