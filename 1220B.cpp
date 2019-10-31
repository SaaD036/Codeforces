#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    unsigned long long int a[n][n], result[n], p;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }

    for(int i=0; i<n; i++){
        if(i==0){
            p = a[0][1] * a[0][2];
            p = p / a[1][2];
            result[i] = sqrt(p);
        }

        else if(i==1){
            p = a[1][0] * a[1][2];
            p = p / a[0][2];
            result[i] = sqrt(p);
        }
        else{
            p = a[i][0] * a[i][1];
            p = p / a[0][1];
            result[i] = sqrt(p);
        }
    }

    for(int i=0; i<n-1; i++){
        cout<<result[i]<<" ";
    }
    cout<<result[n-1];

    return 0;
}
