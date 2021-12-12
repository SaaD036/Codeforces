#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n, ptr_a, ptr_b, turn=1, score_a=0, score_b=0;
    cin>>n;
    long long int a[n], b[n];

    ptr_a = ptr_b = n-1;

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    for(int i=0; i<n; i++){
        cin>>b[i];
    }

    sort(a, a+n);
    sort(b, b+n);

    while(ptr_a>=0 || ptr_b>=0){
        if(turn == 1){
            if(ptr_b < 0){
                for(int i=ptr_a; i>=0; i-=2){
                    score_a += a[i];

                    ///cout<<"a take (in loop): "<<a[i]<<endl;
                    ///cout<<"b leave : "<<a[i+1]<<endl;
                }
                break;
            }
            else if(ptr_a < 0){
                ptr_b--;
            }
            else{
                int my = a[ptr_a];
                int his = b[ptr_b];

                if(my > his){
                    score_a += my;
                    ptr_a--;

                    ///cout<<"a take: "<<my<<endl;
                }
                else{
                    ptr_b--;
                    ///cout<<"a remove: "<<his<<endl;
                }
            }
            turn = 2;
            ///cout<<"turn changed to "<<turn<<endl;
        }
        else{
            if(ptr_b < 0){
                ptr_a--;
            }
            else if(ptr_a < 0){
                for(int i=ptr_b; i>=0; i-=2){
                    score_b += b[i];

                    ///cout<<"b take (in loop): "<<b[i]<<endl;
                    ///cout<<"a leave : "<<b[i+1]<<endl;
                }
                break;
            }
            else{
                int my = b[ptr_b];
                int his = a[ptr_a];

                if(my > his){
                    score_b += my;
                    ptr_b--;

                    ///cout<<"b take: "<<my<<endl;
                }
                else{
                    ptr_a--;

                    ///cout<<"b remove: "<<his<<endl;
                }
            }
            turn = 1;
            ///cout<<"turn changed to "<<turn<<endl;
        }
    }

    cout<<score_a-score_b;

    return 0;
}
