#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int result[t];

    for(int i=0; i<t; i++){
        int n, sum=0;
        cin>>n;
        int a[n];

        for(int j=0; j<n; j++){
            cin>>a[j];
            sum+=a[j];
        }

        for(int j=n; j>=1; j--){
            bool flag=false;

            if(sum%j==0){
                ///cout<<j<<"  ";
                int k=sum/j, tmp_sum=0;
                flag = true;

                for(int l=0; l<n; l++){
                    tmp_sum +=  a[l];

                    if(tmp_sum == k){
                        ///cout<<tmp_sum<<"   ";
                        tmp_sum=0;
                    }
                    else if(tmp_sum > k){
                        ///cout<<tmp_sum<<"   ";
                        flag = false;
                        break;
                    }

                    if(l == n-1){
                        if(tmp_sum==k || tmp_sum==0){
                            flag = true;
                        }
                        else{
                            flag = false;
                        }
                    }
                }
            }
            if(flag){
                result[i] = n-j;
                break;
            }
        }
    }

    for(int i=0; i<t; i++){
        cout<<result[i]<<endl;
    }

    return 0;
}
