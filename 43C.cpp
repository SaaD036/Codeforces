#include <iostream>
#include <algorithm>
using namespace std;

int minimum(int a, int b){
    if(a<b){
        return a;
    }
    return b;
}

int main(){
    int n, m=1, res=0;
    cin>>n;
    int a[n], mod0=0, mod1=0, mod2=0;

    for(int i=0; i<n; i++){
        cin>>a[i];

        if(a[i]%3 == 0){
            mod0++;
        }
        else if(a[i]%3 == 1){
            mod1++;
        }
        else{
            mod2++;
        }
    }

    res = res + mod0/2 + minimum(mod1, mod2);
    ///mod1 -= mod1-minimum(mod1, mod2);
    ///mod2 -= mod2-minimum(mod1, mod2);
    ///res += mod1/3 + mod2/3;

    cout<<res;

    return 0;
}
