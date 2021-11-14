#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    long long int result[t];

    for(int i=0; i<t; i++){
        int n, k;
        cin>>n>>k;
        long long int a[n], total=0;
        int w[k];

        for(int j=0; j<n; j++){
            cin>>a[j];
            total += a[j];
        }
        for(int j=0; j<k; j++){
            cin>>w[j];
        }

        if(n==k){
            result[i] = total*2;
        }
        else{
            long long int tmp=0;
            int pos=0;

            sort(a, a+n);
            sort(w, w+k);

            for(int j=n-1, p=0; p<k; j--, p++){
                if(w[p] == 1){
                    tmp = tmp + a[j]*2;
                }
                else{
                    tmp = tmp + a[j];
                }
            }

            for(int j=k-1; j>=0; j--){
                if(w[j]==1){
                    break;
                }

                tmp += a[pos];
                pos += w[j]-1;
            }

            result[i] = tmp;
        }
    }

    for(int i=0; i<t; i++){
        cout<<result[i]<<endl;
    }

    return 0;
}
