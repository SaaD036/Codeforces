#include <iostream>
using namespace std;

int ceiling(int a){
    if(a%2==0){
        return a/2;
    }
    else{
        return a/2+1;
    }
}

int main(){
    int t;
    cin>>t;
    int result[t];

    for(int i=0; i<t; i++){
        int n, odd=0, even=0;
        cin>>n;
        int a[n];

        for(int j=0; j<n; j++){
            cin>>a[j];

            if(a[j]%2==0){
                even++;
            }
            else if(a[j]%2==1){
                odd++;
            }
        }

        if(n%2==0){
            if(even == 0 || odd==0){
                result[i] = -1;
            }
            else if(even!=0 && odd!=0){
                result[i] = 1;
            }
        }
        else{
            if(odd==0){
                result[i] = -1;
            }
            else{
                result[i] = 1;
            }
        }
    }

    for(int i=0; i<t; i++){
        if(result[i] == -1){
            cout<<"NO";
        }
        else{
            cout<<"YES";
        }

        if(i<t-1){
            cout<<endl;
        }
    }

    return 0;
}
