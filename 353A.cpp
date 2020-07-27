#include <iostream>
using namespace std;

int main(){
    int n, aa=0, bb=0;
    cin>>n;
    int a[n], b[n];

    for(int i=0; i<n; i++){
        cin>>a[i]>>b[i];
        aa+=a[i];
        bb+=b[i];
    }

    if(aa%2==0 && bb%2==0){
        cout<<"0";
    }
    else if(aa%2==1 && bb%2==0){
        cout<<"-1";
    }
    else if(aa%2==0 && bb%2==1){
        cout<<"-1";
    }
    else{
        int flag = 0;

        for(int i=0; i<n; i++){
            if(a[i]%2==0 && b[i]%2==1){
                cout<<"1";
                flag=1;
                break;
            }
            if(a[i]%2==1 && b[i]%2==0){
                cout<<"1";
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<"-1";
        }
    }

    return 0;
}
