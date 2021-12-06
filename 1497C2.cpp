#include <iostream>
using namespace std;

int main(){
    int t, k, n;
    cin>>t;

    for(int i=0; i<t; i++){
        cin>>n>>k;
        int result[k];

        for(int j=0; j<k-3; j++){
            result[j] = 1;
            n--;
        }

        if(n%2==1){
            result[k-3] = 1;
            result[k-2] = n/2;
            result[k-1] = n/2;
        }
        else{
            if(n%4==0){
                result[k-3] = n/2;
                result[k-2] = n/4;
                result[k-1] = n/4;
            }
            else{
                result[k-3] = n/2 - 1;
                result[k-2] = n/2 - 1;
                result[k-1] = 2;
            }
        }

        for(int j=0; j<k; j++){
            cout<<result[j]<<"  ";
        }
        cout<<endl;
    }

    return 0;
}
