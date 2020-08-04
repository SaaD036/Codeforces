#include <iostream>
using namespace std;

int main(){
    unsigned long long int n, m, a, b;
    cin>>n>>m;
    unsigned long long int result[m];
    bool rook_x[n], rook_y[n];

    a = b = n;
    for(unsigned long long int i=0; i<n; i++){
        rook_x[i] = rook_y[i] = false;
    }

    for(unsigned long long int i=0; i<m; i++){
        unsigned long long int p, q;
        cin>>p>>q;

        if(rook_x[p-1] == false){
            rook_x[p-1] = true;
            a--;
        }
        if(rook_y[q-1] == false){
            rook_y[q-1] = true;
            b--;
        }

        result[i] = a*b;
    }

    for(unsigned long long int i=0; i<m; i++){
        cout<<result[i]<<" ";
    }

    return 0;
}
