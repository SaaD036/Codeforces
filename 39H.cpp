#include <iostream>
using namespace std;

int convertTo(int n, int b){
    int result=0, multiply=1;

    while(n != 0){
        result = result + n%b*multiply;
        multiply *= 10;
        n = n/b;
    }

    return result;
}

int main(){
    int k;
    cin>>k;

    for(int i=1; i<k; i++){
        for(int j=1; j<k; j++){
            cout<<convertTo(i*j, k)<<" ";
        }
        cout<<endl;
    }
    return 0;
}
