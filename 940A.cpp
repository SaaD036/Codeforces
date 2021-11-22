#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, b, result;
    cin>>n>>b;
    int a[n];

    result = n+1;

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    sort(a, a+n);

    if(n == 1){
        result = 0;
    }

    for(int i=0; i<n-1; i++){
        int index_2 = n;

        for(int j=i+1; j<n; j++){
            if(a[j]-a[i] > b){
                index_2 = j;
                break;
            }
        }

        int tmp = i+n-index_2;

        if(tmp < result){
            result = tmp;
        }
    }

    cout<<result;

    return 0;
}
