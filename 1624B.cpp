#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    bool res[t];

    for(int i=0; i<t; i++){
        int a, b, c, d, tmp;
        cin>>a>>b>>c;

        d = c-b;
        tmp = b-d;

        if(tmp%a==0 && tmp/a>=1){
            res[i] = true;
            continue;
        }

        d = c-a;
        tmp = a+d/2;
        if(d%2==0 && tmp%b==0 && tmp/b>=1){
            res[i] = true;
            continue;
        }

        d = b-a;
        tmp = b+d;
        if(tmp%c==0 && tmp/c>=1){
            res[i] = true;
            continue;
        }

        res[i] = false;
    }

    for(int i=0; i<t; i++){
        if(res[i]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
