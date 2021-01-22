#include <iostream>
using namespace std;

int main(){
    int n, k, m, p=-1;
    cin>>n>>k>>m;
    int reminder[m], a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<m; i++){
        reminder[i] = 0;
    }
    for(int i=0; i<n; i++){
        reminder[a[i]%m]++;
    }

    for(int i=0; i<m; i++){
        if(reminder[i]>=k){
            p = i;
            break;
        }
    }

    if(p == -1){
        cout<<"No";
    }
    else{
        cout<<"Yes"<<endl;

        for(int i=0, j=0; i<n; i++){
            if(a[i]%m == p){
                cout<<a[i]<<" ";
                j++;
            }
            if(j==k){
                break;
            }
        }
    }

    return 0;
}
