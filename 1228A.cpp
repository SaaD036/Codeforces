#include <iostream>
#include <algorithm>
using namespace std;

long int retNotMatch(long int l, long int r){
    long int a[6], q;

    for(int i=0; i<6; i++){
        a[i] = i-6;
    }

    for(long int i=l; i<=r; i++){
        long int p=i;
        q=0;

        for(int j=0; p!=0; j++){
            a[j] = p%10;
            ///cout<<a[j]<<"   ";
            p = p/10;
        }
        ///cout<<endl;

        for(int j=0; j<5; j++){
            for(int k=j+1; k<6; k++){
                if(a[j] == a[k]){
                    q=1;
                    break;
                }
            }
            if(q==1){
                break;
            }
        }
        if(q==0){
            return i;
        }
    }
    return -1;
}

int main(){
    long int l, r;
    cin>>l>>r;

    cout<<retNotMatch(l, r);

    return 0;
}
