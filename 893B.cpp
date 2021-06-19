#include <iostream>
#include <math.h>
using namespace std;

int make_divisor(int digit){
    int result=0;

    for(int i=digit; i>digit/2; i--){
        result += 1*pow(2, i-1);
    }

    return result;
}

int main(){
    int n, result;
    cin>>n;

    for(int i=17; i>0; i-=2){
        ///cout<<make_divisor(i)<<endl;
        if(n%make_divisor(i) == 0){
            result = make_divisor(i);
            break;
        }
    }

    cout<<result;

    return 0;
}
