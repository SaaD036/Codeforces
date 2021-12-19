#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, cake;
    unsigned long long int result=0;
    cin>>n;
    int tier[2*n];

    for(int i=0; i<2*n; i++){
        tier[i] = -1;
    }

    for(int i=1; i<=2*n; i++){
        cin>>cake;
        int tmp_index = (cake-1)*2;

        if(tier[tmp_index] == -1){
            tier[tmp_index] = i;
        }
        else{
            tier[tmp_index+1] = i;
        }
    }

    /**for(int i=0; i<2*n; i++){
        cout<<i+1<<"  "<<tier[i]<<endl;
    }**/

    for(int i=2; i<2*n; i+=2){
        result += abs(tier[i] - tier[i-2]);
        result += abs(tier[i+1] - tier[i-1]);
    }

    result += abs(tier[0] - 1);
    result += abs(tier[1] - 1);

    cout<<result;


    return 0;
}
