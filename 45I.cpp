#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a;
    cin>>n;
    vector<int> pos, neg, zer;

    for(int i=0; i<n; i++){
        cin>>a;

        if(a<0) neg.push_back(a);
        if(a>0) pos.push_back(a);
        else zer.push_back(a);
    }

    sort(neg.begin(), neg.end());

    if(pos.size()==0 && neg.size()<2){
        if(neg.size()==1 && n==1) cout<<neg[0];
        else cout<<"0";

        return 0;
    }

    if(neg.size() > 1){
        for(int i=0; i<neg.size()-1; i++) pos.push_back(neg[i]);

        if(neg.size()>0 && neg.size()%2==0) pos.push_back(neg[neg.size()-1]);
    }

    for(int i=0; i<pos.size(); i++) cout<<pos[i]<<" ";

    return 0;
}
