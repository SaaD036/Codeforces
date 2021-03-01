#include <iostream>
#include <algorithm>
using namespace std;

unsigned long long int func(int a){
    unsigned long long int result=0;

    while(a != 0){
        result += a%2;
        a=a/2;
    }

    return result;
}

int main(){
    unsigned long long int n;
    cin>>n;
    //cout<<n*(n-1)/2;
    unsigned long long int a[n], result[n], tmp=0, res=0;

    for(unsigned long long int i=0; i<n; i++){
        cin>>a[i];
        result[i] = func(a[i]);
    }

    sort(result, result+n);

    for(unsigned long long int i=1; i<n; i++){
        if(result[i]==result[i-1]){
            tmp++;
        }
        else{
            tmp++;

            res += tmp*(tmp-1)/2;
            tmp=0;
        }

        if(i==n-1 && tmp!=0){
            tmp++;

            res += tmp*(tmp-1)/2;
        }
    }

    cout<<res;

    return 0;
}
