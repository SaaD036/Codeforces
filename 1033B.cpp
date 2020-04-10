#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(unsigned long long int a){
    if(a < 4){
        return true;
    }
    else{

        for(int i=2; i<=sqrt(a); i++){
            if(a%i == 0){
                return false;
            }
        }
        return true;
    }
}

int main(){
    int t;
    cin>>t;
    int res[t];

    for(int i=0; i<t; i++){
        unsigned long long int a, b;
        cin>>a>>b;

        if(a-b == 1){
            if(isPrime(a+b)){
                res[i] = 1;
            }
            else{
                res[i] = 0;
            }
        }
        else{
            res[i] = 0;
        }
    }

    for(int i=0; i<t; i++){
        if(res[i] == 1){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }

        if(i < t-1){
            cout<<endl;
        }
    }

    return 0;
}
