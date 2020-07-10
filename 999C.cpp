#include <iostream>
using namespace std;

int main(){
    int n, k;
    cin>>n>>k;
    char a[n], asci = 'a';
    cin>>a;

    for(char i=asci; i<=122; i++){
        for(int j=0; j<n; j++){
            if(a[j] == i){
                a[j] = ' ';
                k--;
            }
            if(k==0){
                break;
            }
        }
        if(k==0){
            break;
        }
    }

    for(int i=0; i<n; i++){
        if(a[i] != ' '){
            cout<<a[i];
        }
    }

    return 0;
}
