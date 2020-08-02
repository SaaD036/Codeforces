#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int n, k;
    cin>>n>>k;
    int a[n], b[n];
    b[0] = a[0];
    double result=0;

    for(int i=0; i<n; i++){
        cin>>a[i];
        b[i] = a[i];
    }
    for(int i=1; i<n; i++){
        b[i] += b[i-1];
    }

    for(int i=k; i<=n; i++){
        for(int j=0; j<=n-i; j++){
            int p = b[j+i-1] - b[j] + a[j];
            double tmp = (double) p/i;

            //cout<<p<<endl;

            //cout<<tmp<<"  ";

            if(tmp > result){
                result = tmp;
            }
        }
        //cout<<endl;
    }

    printf("%.15lf", result);

    return 0;
}
