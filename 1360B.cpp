#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t, n, minimum;
    cin>>t;
    int result[t];

    for(int i=0; i<t; i++){
        cin>>n;
        int s[n];

        for(int j=0; j<n; j++){
            cin>>s[j];
        }
        sort(s, s+n);

        minimum = s[1]-s[0];

        for(int j=1; j<n-1; j++){
            if( (s[j+1]-s[j]) < minimum){
                minimum = s[j+1]-s[j];
            }
        }
        result[i] = minimum;
    }

    for(int i=0; i<t; i++){
        cout<<result[i]<<endl;
    }

    return 0;
}
