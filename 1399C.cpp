#include <iostream>
#include <algorithm>
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
    int result[t];

    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        int a[n], maximum=0, res=0;

        for(int j=0; j<n; j++){
            cin>>a[j];
            if(a[j]>maximum){
                maximum = a[j];
            }
        }

        int index[2*maximum];
        for(int j=0; j<2*maximum; j++){
            index[j]=0;
        }
        for(int j=0; j<n; j++){
            index[a[j]-1]++;
        }

        for(int j=2*maximum; j>1; j--){
            int tmp=0;

            for(int k=1; k<j; k++){
                tmp = tmp + minimum(index[k-1], index[j-k-1]);
            }

            if(tmp > res){
                res = tmp;
            }
            ///cout<<tmp<<"   ";
        }
        ///cout<<endl<<endl;
        result[i] = res;
        res=0;
    }

    for(int i=0; i<t; i++){
        cout<<result[i]/2<<endl;
    }

    return 0;
}
