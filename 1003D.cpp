#include <iostream>
using namespace std;

int ret_base(int a){
    int ret=0;

    if(a==1){
        return 0;
    }

    while(a != 0){
        a=a/2;
        ret++;
    }

    return ret-1;
}

int ret_last_number(int a){
    int p=1;

    while(p < a){
        p = p*2;
    }

    if(p==a){
        return p;
    }
    return p/2;
}

int main(){
    int n, q, tmp, a[31];
    cin>>n>>q;
    int b[q], result[q];

    for(int i=0; i<=30; i++){
        a[i] = 0;
    }
    for(int i=0; i<n; i++){
        cin>>tmp;
        a[ret_base(tmp)]++;
    }
    for(int i=0; i<q; i++){
        cin>>b[i];
    }

    //cout<<a[0]<<endl;

    for(int i=0; i<q; i++){
        int c=0, d=b[i], aa[31];

        for(int j=0; j<31; j++){
            aa[j] = 0;
        }

        while(d != 0){
            int e = ret_last_number(d);
            d = d-e;

            aa[ret_base(e)]++;
        }

        for(int j=30; j>0; j--){
            if(aa[j] > a[j]){
                c = c + a[j];
                int p = aa[j]-a[j];
                p = p*2;
                aa[j-1] = aa[j-1]+p;
            }
            else{
                c = c + aa[j];
            }

            //cout<<a[j]<<"  "<<aa[j]<<endl;
        }
        //cout<<endl;
        //cout<<aa[0];
        if(a[0] >= aa[0]){
            cout<<c+aa[0]<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }

    return 0;
}
