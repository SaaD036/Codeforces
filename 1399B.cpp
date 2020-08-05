#include <iostream>
using namespace std;

int minimum(int a, int b){
    if(a<b){
        return a;
    }
    return b;
}

int main(){
    int t;
    cin>>t;
    unsigned long long int result[t];

    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        unsigned long long int a[n], b[n], min_a=1000000001, min_b=1000000001, res=0;

        for(int j=0; j<n; j++){
            cin>>a[j];
            if(a[j] < min_a){
                min_a = a[j];
            }
        }
        for(int j=0; j<n; j++){
            cin>>b[j];
            if(b[j] < min_b){
                min_b = b[j];
            }
        }

        ///cout<<min_a<<"  "<<min_b;

        for(int j=0; j<n; j++){
            unsigned long long int p=minimum(a[j]-min_a, b[j]-min_b), q, r;
            a[j] = a[j]-p;
            b[j] = b[j]-p;

            q= a[j]-min_a;
            r= b[j]-min_b;

            ///cout<<p<<"  "<<q<<"  "<<r<<endl;
            res += p+q+r;
        }
        ///cout<<res<<endl<<endl;
        result[i] = res;
    }

    for(int i=0; i<t; i++){
        cout<<result[i]<<endl;
    }

    return 0;
}
