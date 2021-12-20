#include <iostream>
#include <cstring>
using namespace std;

int main(){
    string s, t;
    cin>>s;
    cin>>t;
    int len_s = s.length();
    int len_t = t.length();

    if(len_s != len_t){
        cout<<"NO";
        return 0;
    }

    for(int i=0, j=len_t-1; i<len_s; i++,j--){
        if(s[i] != t[j]){
            cout<<"NO";
            return 0;
        }
    }

    cout<<"YES";

    return 0;
}
