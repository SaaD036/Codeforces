#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    unsigned int res[t];

    for(int i=0; i<t; i++){
        unsigned int tmp;
        cin>>tmp;

        if(tmp%2==0){
            res[i] = tmp/2 - 1;
        }
        else{
            res[i] = tmp/2;
        }
    }

    for(int i=0; i<t; i++){
        cout<<res[i];

        if(i < t-1){
            cout<<endl;
        }
    }

    return 0;
}
