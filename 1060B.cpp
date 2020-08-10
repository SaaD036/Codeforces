#include <iostream>
using namespace std;

unsigned long long int close_9(unsigned long long int a){
    unsigned long long int ret=0;

    while(a != 0){
        ret*=10;
        ret+=9;
        a/=10;
    }
    return ret/10;
}

int sum(unsigned long long int a){
    int ret=0;

    while(a != 0){
        ret+=a%10;
        a/=10;
    }
    return ret;
}

int main(){
    unsigned long long int n;
    cin>>n;

    ///cout<<close_9(n)<<endl;
    ///cout<<sum(close_9(n))<<endl;
    ///cout<<sum(n-close_9(n))<<endl;
    cout<<sum(close_9(n))+sum(n-close_9(n));

    return 0;
}
