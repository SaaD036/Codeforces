#include <iostream>
#include <math.h>
using namespace std;

int isPrime(int y){
    int tmp = sqrt(y);

    if(y%2 == 0){
        return false;
    }

    for(int i=3; i<=tmp; i+=2){
        if(y%i == 0){
            return false;
        }
    }

    return true;
}

int main(){
    int p, y, maxPrime, result = -1;
    cin>>p>>y;

    maxPrime = p+1;

    for(int i=y; i>p; i--){
        if(isPrime(i)){
            maxPrime=i;
            break;
        }
    }

    for(int i=y; i>=maxPrime; i--){
        int tmp = sqrt(i);
        bool isDivisible = false;

        if(tmp > p){
            tmp = p;
        }

        if(i%2 == 0){
            continue;
        }

        for(int j=3; j<=tmp; j+=2){
            if(i%j == 0){
                isDivisible = true;
                break;
            }
        }

        if(!isDivisible){
            result = i;
            break;
        }
    }

    cout<<result;

    return 0;
}
