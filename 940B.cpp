#include <iostream>
using namespace std;

int main(){
    unsigned long long int n, k, a, b, x, result=0;
    cin>>n>>k>>a>>b;
    x=n;

    while(x>1){
        if(x%k != 0){
            if(x<k){
                result = result + (x-1)*a;
                x = 1;
            }
            else{
                int rem = x%k;
                result = result + rem*a;
                x = x-rem;
            }
        }
        else{
            if(k == 1){
                result=(x-1)*a;
                break;
            }

            int tmp = x/k;

            if(b < (x-tmp)*a){
                result = result+b;
            }
            else{
                result = result+(x-tmp)*a;
            }
            x=tmp;
        }
    }

    cout<<result;

    return 0;
}
