#include <iostream>
using namespace std;

int minimum(int a, int b){
    if(a<b){
        return a;
    }
    return b;
}

int main(){
    int t;
    cin>>t;
    int result[t];

    for(int i=0; i<t; i++){
        int n, a, mod_0=0, mod_1=0, mod_2=0;
        cin>>n;

        for(int j=0; j<n; j++){
            cin>>a;

            if(a%3==0){
                mod_0++;
            }
            else if(a%3==1){
                mod_1++;
            }
            else{
                mod_2++;
            }
        }

        result[i] = mod_0 + minimum(mod_1, mod_2) + (mod_1-minimum(mod_1, mod_2))/3 + (mod_2-minimum(mod_1, mod_2))/3;
    }

    for(int i=0; i<t; i++){
        cout<<result[i]<<endl;
    }

    return 0;
}
