#include <iostream>
using namespace std;

int binarySearch(int arr[], int l, int r, int x){
    while (l <= r) {
        int m = l + (r - l) / 2;

        if (arr[m] == x)
            return m;

        if (arr[m] < x)
            l = m + 1;

        else
            r = m - 1;
    }

    return -1;
}

int main(){
    int n, m, result=0;
    cin>>n>>m;
    int a[n], b[m];

    for(int i=0; i<n; i++){
        cin>>a[i];

        if(i>0){
            a[i] += a[i-1];
        }
    }
    for(int i=0; i<m; i++){
        cin>>b[i];

        if(i>0){
            b[i] += b[i-1];
        }
    }

    for(int i=0; i<m; i++){
        if(binarySearch(a, 0, n, b[i]) != -1){
            result++;
        }
    }

    cout<<result;

    return 0;
}
