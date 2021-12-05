#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, maxNumber=0, result=0;
    cin>>n;
    int a[n];
    bool flag = true;
    vector<int> perm;

    for(int i=0; i<n; i++){
        cin>>a[i];

        if(a[i] > maxNumber){
            maxNumber = a[i];
        }
    }

    int b[maxNumber], permutation[maxNumber];

    for(int i=0; i<maxNumber; i++){
        b[i] = permutation[i] = 0;
    }
    for(int i=0; i<n; i++){
        b[a[i]-1]++;
    }

    for(int i=0; i<maxNumber-1; i++){
        if(b[i] < b[i+1]){
            flag=false;
            break;
        }
        else{
            result += b[i]-b[i+1];
        }
    }

    result += b[maxNumber-1];

    if(flag){
        cout<<result<<endl;

        for(int i=0; i<n; i++){
            permutation[a[i]-1]++;
            cout<<permutation[a[i]-1]<<" ";
        }
    }
    else{
        cout<<"-1";
    }

    return 0;
}
