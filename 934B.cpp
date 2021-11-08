#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int loop[10] = {1, 0, 0, 0, 1, 0, 1, 0, 2, 1};

    if(n>36){
        cout<<"-1";
    }
    else{
        int rem = n%2;
        int tmp= n/2;

        for(int i=0; i<tmp; i++){
            cout<<"8";
        }

        for(int i=0; i<rem; i++){
            cout<<"6";
        }
    }

    return 0;
}
