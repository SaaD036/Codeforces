#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int result[t];

    for(int i=0; i<t; i++){
        int a;
        cin>>a;

        result[i] = (a/2)+1;
    }

    for(int i=0; i<t; i++){
        cout<<result[i]<<endl;
    }

    return 0;
}
