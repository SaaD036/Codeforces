#include <iostream>
using namespace std;

int main(){
    int t, k, n;
    cin>>t;
    int result[t][3];

    for(int i=0; i<t; i++){
        cin>>n>>k;

        if(n%2==1){
            result[i][0] = 1;
            result[i][1] = n/2;
            result[i][2] = n/2;
        }
        else{
            if(n%4==0){
                result[i][0] = n/2;
                result[i][1] = n/4;
                result[i][2] = n/4;
            }
            else{
                result[i][0] = n/2 - 1;
                result[i][1] = n/2 - 1;
                result[i][2] = 2;
            }
        }
    }

    for(int i=0; i<t; i++){
        cout<<result[i][0]<<" "<<result[i][1]<<" "<<result[i][2]<<endl;
    }

    return 0;
}
