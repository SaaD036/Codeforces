#include <iostream>
using namespace std;

char f(int* a, char b){
    return a[b-'0'-1] + '0';
}

int main(){
    int n, sub_int[9];
    cin>>n;
    char a[n], l=0, r=0;
    cin>>a;
    bool big=false;

    for(int i=0; i<9; i++){
        cin>>sub_int[i];
    }

    for(int i=0; i<n; i++){
        if(f(sub_int, a[i]) < a[i]){
            if(big){
                break;
            }
        }

        if(f(sub_int, a[i]) > a[i]){
            a[i] = f(sub_int, a[i]);
            big = true;
        }
    }

    cout<<a;

    return 0;
}
