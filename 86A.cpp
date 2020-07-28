#include <iostream>
using namespace std;

unsigned long long int reflected_number(unsigned long long int a){
    unsigned long long int result = 1, b=a;

    while(b!=0){
        result = result * 10;
        b = b/10;
    }
    return result-1-a;
}
unsigned long long int full_number(unsigned long long int a){
    unsigned long long int result = 1, b=a;

    while(b!=0){
        result = result * 10;
        b = b/10;
    }
    return result;
}

int main(){
    unsigned long long int l, r;
    cin>>l>>r;
    unsigned long long int m, result=0;

    m = full_number(r)/2;
    //cout<<m<<endl;

    if(m>=l && m<=r){
        result = m*reflected_number(m);
        cout<<result;
    }
    else if(m>r){
        result = r*reflected_number(r);
        cout<<result;
    }
    else if(m<l){
        result = l*reflected_number(l);
        cout<<result;
    }
    return 0;
}
