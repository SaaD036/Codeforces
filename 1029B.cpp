#include <iostream>
using namespace std;



int main(){
    int n, result=0, tmp=0;
    cin>>n;
    int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    for(int i=0; i<n-1; i++){
        if(2*a[i] >= a[i+1]){
            tmp++;
        }
        else{
            if(tmp > result){
                result=tmp;
            }
            tmp=0;
            ///cout<<i<<"  ";
        }
    }

    if(tmp>result){
        result=tmp;
    }

    cout<<result+1;

    return 0;
}
