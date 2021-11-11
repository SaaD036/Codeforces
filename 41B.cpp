#include <iostream>
using namespace std;

int main(){
    int n, b;
    cin>>n>>b;
    int a[n], result=b;

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int dollar = b/a[i];

            if(dollar*a[j]+b%a[i] > result){
                result = dollar*a[j] + b%a[i];
            }
        }
    }

    cout<<result;

    return 0;
}
