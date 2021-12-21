#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.length(), result=0;
    int a[n], b[n];

    if(s[0]=='a'){
        a[0] = 1;
        b[0] = 0;
    }
    else{
        a[0] = 0;
        b[0] = 1;
    }

    for(int i=1; i<n; i++){
        a[i] = a[i-1];
        b[i] = b[i-1];

        if(s[i]=='a'){
            a[i]++;
        }
        else{
            b[i]++;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int current = a[n-1]-a[j]+a[i]+b[j]-b[i];
            if(s[i] == 'b'){
                current++;
            }
            result = max(current, result);
        }
    }

    cout<<result;

    return 0;
}
