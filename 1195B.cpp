#include <iostream>
#include <math.h>
using namespace std;

int main(){
    unsigned long long int n, k, result=0, tmp;
    cin>>n>>k;

    tmp = 9+8*(n+k);
    tmp = sqrt(tmp);
    tmp -= 3;
    tmp = tmp/2;
    result = n-tmp;

    cout<<result;

    return 0;
}
