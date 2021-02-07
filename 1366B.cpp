#include <iostream>
using namespace std;


int minimum(int a, int b){
    if(a<b){
        return a;
    }
    return b;
}
int maximum(int a, int b){
    if(a>b){
        return a;
    }
    return b;
}

int main(){
    int t;
    cin>>t;
    int result[t];

    for(int i=0; i<t; i++){
        int n, x, m, l_p, r_p;
        cin>>n>>x>>m;

        l_p = x;
        r_p = x;

        for(int j=0; j<m; j++){
            int l, r;
            cin>>l>>r;

            if(l>=l_p && l<=r_p){
                l_p = minimum(l, l_p);
                r_p = maximum(r, r_p);
            }
            else if(r>=l_p && r<=r_p){
                l_p = minimum(l, l_p);
                r_p = maximum(r, r_p);
            }
            else if(l_p>=l && l_p<=r){
                l_p = minimum(l, l_p);
                r_p = maximum(r, r_p);
            }
            else if(r_p>=l && r_p<=r){
                l_p = minimum(l, l_p);
                r_p = maximum(r, r_p);
            }
        }

        result[i] = r_p-l_p+1;
    }

    for(int i=0; i<t; i++){
        cout<<result[i]<<endl;
    }

    return 0;
}
