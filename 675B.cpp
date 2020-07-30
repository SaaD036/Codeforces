#include <iostream>
using namespace std;

int main(){
    unsigned long long int n, a, b, c, d, q, s, t, match=0, result=0;
    cin>>n>>a>>b>>c>>d;

    for(unsigned long long int i=1; i<=n; i++){
        q = i+b-c;
        s = i+a-d;
        t = i+a+b-c-d;

        if( (q>0 && q<=n) && (s>0 && s<=n) && (t>0 && t<=n)){
            result = result + n;
        }
    }

    cout<<result;

    return 0;
}
