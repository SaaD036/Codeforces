#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    unsigned long long int result[t];

    for(int i=0; i<t; i++){
        unsigned long long int s, sum;
        cin>>s;
        sum = s;

        while(s>9){
            sum = sum+s/10;
            s=s/10+s%10;
        }

        result[i] = sum;
    }

    for(int i=0; i<t; i++){
        cout<<result[i];

        if(i<t-1){
            cout<<endl;
        }
    }



    return 0;
}
