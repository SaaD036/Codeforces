#include <iostream>

using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        unsigned long long int n, k, pos1, pos2, res=0, j=1;
        cin>>n>>k;

        while(res<k){
            res+=j;
            pos1=j;
            j++;
        }
        pos2 = pos1-(res-k)-1;

        for(int k=n-1; k>=0; k--){
            if(k==pos1 || k==pos2){
                cout<<"b";
            }
            else{
                cout<<"a";
            }
        }

        if(i < t-1){
            cout<<endl;
        }
    }

    return 0;
}
