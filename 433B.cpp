#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, m;
    cin>>n;
    unsigned long long int v[n], u[n], vv[n], uu[n];

    for(int i=0; i<n; i++){
        cin>>v[i];
        u[i] = v[i];
    }
    sort(u, u+n);

    for(int i=1; i<n; i++){
        v[i] = v[i] + v[i-1];
        u[i] = u[i] + u[i-1];
    }

    cin>>m;
    unsigned long long int result[m];

    for(int i=0; i<m; i++){
        int type, l, r;
        cin>>type>>l>>r;

        if(type==1){
            if(l==1){
                result[i] = v[r-1];
            }
            else{
                result[i] = v[r-1]-v[l-2];
            }
        }
        else{
            if(l==1){
                result[i] = u[r-1];
            }
            else{
                result[i] = u[r-1]-u[l-2];
            }
        }
    }

    for(int i=0; i<m; i++){
        cout<<result[i]<<endl;
    }

    return 0;
}
