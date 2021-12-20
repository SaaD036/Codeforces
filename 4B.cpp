#include <bits/stdc++.h>
using namespace std;

int main(){
    int d, s, xs=0, ns=0;
    cin>>d>>s;
    int mn[d], mx[d];

    for(int i=0; i<d; i++){
        cin>>mn[i]>>mx[i];
        xs += mx[i];
        ns += mn[i];
    }

    if(s<ns || s>xs){
        cout<<"NO";
        return 0;
    }

    s = s-ns;

    for(int i=0; i<d; i++){
        int tmp = mx[i]-mn[i];

        if(tmp < s){
            mn[i] += tmp;
            s -= tmp;
        }
        else{
            mn[i] += s;
            break;
        }
    }

    cout<<"YES"<<endl;
    for(int i=0; i<d; i++){
        cout<<mn[i]<<" ";
    }

    return 0;
}
