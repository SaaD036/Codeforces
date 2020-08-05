#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    bool result[t], flag;

    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        int a[n];
        flag=false;

        for(int j=0; j<n; j++){
            cin>>a[j];
        }
        sort(a, a+n);

        for(int j=0; j<n-1; j++){
            if(a[j+1]-a[j] > 1){
                flag=true;
                break;
            }
        }

        if(flag == true){
            result[i] = false;
        }
        else{
            result[i] = true;
        }
    }

    for(int i=0; i<t; i++){
        if(result[i] == true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
