#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, A, B, C, t;
    cin>>n>>A>>B>>C>>t;
    int message[n], time[t];

    for(int i=0; i<t; i++){
        time[i] = 0;
    }

    for(int i=0; i<n; i++){
        cin>>message[i];
        time[message[i]-1]++;
    }

    for(int i=1; i<t; i++){
        time[i] += time[i-1];
    }

    int cu=0, cr=A*n;

    for(int i=0; i<t-1; i++){
        cu += time[i]*C;
        cr -= time[i]*B;
    }
    ///cr += (time[n-1]-time[n-2])*A;

    cout<<max(n*A, cu+cr);

    return 0;
}
