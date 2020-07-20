#include <iostream>
using namespace std;

int main(){
    int n;
    unsigned long long int a=0, b=0, c=0, tmp;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>tmp;
        a += tmp;
    }
    for(int i=0; i<n-1; i++){
        cin>>tmp;
        b += tmp;
    }
    for(int i=0; i<n-2; i++){
        cin>>tmp;
        c += tmp;
    }

    cout<<a-b<<endl<<b-c;

    return 0;
}
