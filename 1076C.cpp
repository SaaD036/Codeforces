#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        float d;
        cin>>d;

        if(d*d-4*d<0)printf("N\n");
        else printf("Y %0.9f %0.9f\n",(d+sqrt(d*d-4*d))/2,(d-sqrt(d*d-4*d))/2);
    }

    return 0;
}
