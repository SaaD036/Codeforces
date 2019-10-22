#include <iostream>
using namespace std;

int main(){
    int q;
    cin>>q;
    int result[q];

    for(int i=0; i<q; i++){
        int n;
        unsigned long long int a, sum=0, avg;
        cin>>n;

        for(int j=0; j<n; j++){
            cin>>a;
            sum += a;
        }
        avg = sum/n;

        if(avg*n == sum){
            result[i] = avg;
        }
        else{
            result[i] = avg + 1;
        }
    }

    for(int i=0; i<q-1; i++){
        cout<<result[i]<<endl;
    }
    cout<<result[q-1];

    return 0;
}
