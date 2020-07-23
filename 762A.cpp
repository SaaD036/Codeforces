#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main(){
    unsigned long long int n, k, sq_rt, nmbr=0;;
    cin>>n>>k;
    sq_rt = sqrt(n);

    for(unsigned long long int i=1; i<=sq_rt; i++){
        if(n%i == 0){
            nmbr++;
        }
    }
    unsigned long long int before[2*nmbr];

    for(unsigned long long int i=1, j=0; i<=sq_rt; i++){
        if(n%i == 0){
            before[j] = i;
            before[2*nmbr-j-1] = n/i;
            j++;
        }
    }

    if(sq_rt*sq_rt != n){
        if(k <= 2*nmbr){
            cout<<before[k-1];
        }
        else{
            cout<<"-1";
        }
    }
    else{
        if(k <= nmbr){
            cout<<before[k-1];
        }
        else if(k>nmbr && k<2*nmbr){
            cout<<before[k];
        }
        else{
            cout<<"-1";
        }
    }

    return 0;
}
