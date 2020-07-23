#include <iostream>
using namespace std;

int gcd(int a, int b){
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int lcm(int a, int b){
    return (a*b)/gcd(a, b);
}

int main(){
    int n, m, z;
    cin>>n>>m>>z;

    ///int  tmp = lcm(n, m);

    cout<<z/lcm(n, m);

    return 0;
}
