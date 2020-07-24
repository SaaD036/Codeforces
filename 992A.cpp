#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, result=1, flag=0;
    cin>>n;
    int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i] == 0){
            flag = 1;
        }
    }

    sort(a, a+n);

    for(int i=1; i<n; i++){
        if(a[i] != a[i-1]){
            result++;
        }
    }

    if(flag == 0){
        cout<<result;
    }
    else{
        cout<<result-1;
    }
    ///cout<<result;

    return 0;
}
