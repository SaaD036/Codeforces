#include <bits/stdc++.h>
using namespace std;

int solution(int a[], int n){
    int result = 0;

    for(int i=1; i<n; i++){
        if((a[i]==2 && a[i-1]==3) || (a[i]==3 && a[i-1]==2)) return -1;

        else if((a[i]==1 && a[i-1]==2) || (a[i]==2 && a[i-1]==1)){
            result += 3;

            if((a[i]==2 && a[i-1]==1) && a[i-2]==3) result--;
        }

        else if((a[i]==1 && a[i-1]==3) || (a[i]==3 && a[i-1]==1)) result += 4;
    }

    return result;
}

int main(){
    int n;
    cin>>n;
    int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    if(solution(a, n) == -1) cout<<"Infinite";
    else cout<<"Finite\n"<<solution(a, n);

    return 0;
}
