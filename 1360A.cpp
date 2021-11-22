#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int result[t];

    for(int i=0; i<t; i++){
        int a, b;

        cin>>a>>b;

        result[i] = min(max(a * 2, b), max(a, b * 2)) * min(max(a * 2, b), max(a, b * 2));
    }

    for(int i=0; i<t; i++){
        cout<<result[i]<<endl;
    }

    return 0;
}
