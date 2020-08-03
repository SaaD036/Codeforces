#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n, k, result=1000000001, a, b;
    cin>>n>>k;

    for(int i=1; i<k; i++){
        if(n%i==0){
            int tmp = (n/i)*k + i;

            if(tmp<result){
                result = tmp;
            }
        }
    }

    cout<<result;

    return 0;
}
