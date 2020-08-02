#include <iostream>
using namespace std;

int sum(int a, int b){
    int ret=0;

    while(a != 0){
        ret = ret + a%b;
        a = a/b;
    }

    return ret;
}
int gcd(int a, int b) {
    if (a == 0)
       return b;
    if (b == 0)
       return a;

    // base case
    if (a == b)
        return a;

    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

int main(){
    int n, result=0;
    cin>>n;

    for(int i=2; i<n; i++){
        result = result + sum(n, i);
    }

    cout<<result/gcd(result, n-2)<<"/"<<(n-2)/gcd(result, n-2);

    return 0;
}
