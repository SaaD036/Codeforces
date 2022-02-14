#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    bool res[t];

    for(int i=0; i<t; i++){
        int n, tmp, tmp1;
        bool flag = true;
        cin>>n;
        int a[n]={0};

        for(int j=0; j<n; j++){
            cin>>tmp;

            while(tmp>0){
                if(tmp<=n){
                    a[tmp-1]++;
                }

                tmp /= 2;
            }
        }

        for(int j=n-1; j>=0; j--){
            if(a[j] == 0){
                flag = false;
                break;
            }

            tmp=(j+1)/2;
            while(tmp>0){
                a[tmp-1]--;

                if(a[tmp-1] == 0){
                    flag = false;
                    break;
                }
                tmp /= 2;
            }
            if(!flag) break;
        }

        res[i] = flag;
    }

    for(int i=0; i<t; i++){
        if(res[i]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
