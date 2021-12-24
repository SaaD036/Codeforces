#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int result[t];

    for(int i=0; i<t; i++){
        int n, res=0;
        set<int> s;
        cin>>n;

        for(int i=1; i*i<=n; i++){
            res++;
            s.insert(i*i);
        }
        for(int i=1; i*i*i<=n; i++){
            if(!s.count(i*i*i)){
                res++;
            }
        }

        result[i] = res;
    }

    for(int i=0; i<t; i++){
        cout<<result[i]<<endl;
    }

    return 0;
}
