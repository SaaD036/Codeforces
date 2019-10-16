#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int n, k, result=0;
    cin>>n>>k;
    char a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    if(k > 0){
        for(int i=0; i<n; i++){
            if(result >= k){
                break;
            }

            if(n==1){
                a[0] = '0';
                break;
            }

            if(i == 0){
                if(a[i] != '1'){
                    a[i] = '1';
                    result++;
                }
            }
            else if(i > 0){
                if(a[i] != '0'){
                    a[i] = '0';
                    result++;
                }
            }
        }
    }

    for(int i=0; i<n; i++){
        cout<<a[i];
    }

    return 0;
}
