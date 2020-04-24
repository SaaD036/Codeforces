#include <iostream>
using namespace std;

int ceiling(int a, int b){
    if(a%b == 0){
        return a/b;
    }
    else{
        return a/b + 1;
    }
}

int main(){
    int n, s;
    cin>>n>>s;

    cout<<ceiling(s, n);

    return 0;
}
