#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char s[5000], c[]="bear";
    cin>>s;
    int n = strlen(s), freq=0, res=0;

    if(n<4){
        cout<<"0";
    }

    else{
        int prev = 0;

        for(int i=0; i<n-3; i++){
            if(s[i]=='b' && s[i+1]=='e' && s[i+2]=='a' && s[i+3]=='r'){
                res = res + (i-prev+1)*(n-i-3);
                prev = i+1;
            }
        }

        cout<<res;
    }
    return 0;
}
