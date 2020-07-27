#include <iostream>
using namespace std;

int main(){
    int n, nmbr_9=0, nmbr_0=0, tmp;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>tmp;

        if(tmp == 0){
            nmbr_0++;
        }
        else{
            nmbr_9++;
        }
    }

    ///cout<<nmbr_9<<"  "<<nmbr_0<<endl;

    if(nmbr_0 == 0){
        cout<<"-1";
    }
    else{
        if(nmbr_9 < 9){
            cout<<"0";
        }
        else{
            for(int i=1; i<=nmbr_9/9; i++){
                cout<<"555555555";
            }
            for(int i=1; i<=nmbr_0; i++){
                cout<<"0";
            }
        }
    }

    return 0;
}

