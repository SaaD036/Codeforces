#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, flag1=0, flag2=0, flag3=0, flag4=0;
    cin>>n;
    char a[2*n], b1[n], b2[n];
    cin>>a;

    for(int i=0; i<n; i++){
        b1[i] = a[i];
    }
    b1[n] = NULL;
    for(int i=n; i<2*n; i++){
        b2[i-n] = a[i];
    }
    b2[n] = NULL;

    sort(b1, b1+n);
    sort(b2, b2+n);

    ///cout<<b1<<endl<<b2<<endl;

    for(int i=0; i<n; i++){
        if(b1[i]>=b2[i]){
            flag1=1;
            break;
        }
    }
    for(int i=0; i<n; i++){
        if(b1[i]<=b2[i]){
            flag2=1;
            break;
        }
    }

    if(flag1==0 || flag2==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    /*for(int i=0, j=n; i<n; i++,j++){
        if(a[i]>=a[j]){
            flag1=1;
            break;
        }
    }
    for(int i=0, j=2*n-1; i<n; i++,j--){
        if(a[i]>=a[j]){
            flag2=1;
            break;
        }
    }

    for(int i=0, j=n; i<n; i++,j++){
        if(a[i]<=a[j]){
            flag3=1;
            break;
        }
    }
    for(int i=0, j=2*n-1; i<n; i++,j--){
        if(a[i]<=a[j]){
            flag4=1;
            break;
        }
    }

    if(flag1==0 || flag2==0 || flag3==0 ||flag4==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }*/

    return 0;
}
