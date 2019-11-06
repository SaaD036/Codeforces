#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, result=0;
    unsigned long int d;
    cin>>n>>d;
    unsigned long int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    sort(a, a+n);

    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(a[j]-a[i] > d){
                break;
            }

            else{
                result = result + 2;
            }
        }
    }

    cout<<result;

    return 0;
}
