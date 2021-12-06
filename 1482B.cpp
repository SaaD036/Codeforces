#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int m[t], c[t];

    for(int i=0; i<t; i++){
        int n, maxINarray=0, pos=-1, neg=1;
        cin>>n;
        int a[n];
        bool flag=true;

        for(int j=0; j<n; j++){
            cin>>a[j];

            if(a[j] > maxINarray){
                maxINarray = a[j];
            }
        }

        for(int j=1; j<n; j++){
            int p = a[j]-a[j-1];

            if(p < 0){
                if(neg == 1){
                    neg = p;
                }

                if(neg != p){
                    flag=false;
                    break;
                }
            }
            else{
                if(pos == -1){
                    pos = p;
                }

                if(pos != p){
                    flag=false;
                    break;
                }
            }
        }

        if(flag){
            if(pos==-1 || neg==1){
                m[i] = 0;
            }
            else{
                if(pos-neg >= maxINarray){
                    m[i] = pos-neg;
                }
                else{
                    m[i] = -1;
                }
                c[i] = pos;
            }
        }
        else{
            m[i] = -1;
        }
    }

    for(int i=0; i<t; i++){
        if(m[i]>0){
            cout<<m[i]<<" "<<c[i];
        }
        else{
            cout<<m[i];
        }

        cout<<endl;
    }

    return 0;
}
