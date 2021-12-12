#include <bits/stdc++.h>
using namespace std;

bool hasSubstring(char* a, char* b, int a_start, int a_end, int b_start, int b_end){
    bool flag = true;

    if(a_end<a_start || b_end<b_start){
        return false;
    }

    if(a_end-a_start != b_end-b_start){
        return false;
    }

    for(int i=a_start, j=b_start; i<=a_end; i++, j++){
        if(a[i] != b[j]){
            return false;
        }
    }

    return flag;
}

int main(){
    int n, matched=1;
    cin>>n;
    char s[n];
    cin>>s;

    for(int i=0; i<n/2; i++){
        if(hasSubstring(s, s, 0, i, i+1, 2*i+1)){
            if(i+1 > matched){
                matched = i+1;
            }
            //cout<<i<<"  "<<j<<"  "<<j-i<<"  "<<matched<<endl;
        }
    }

    cout<<n-matched+1;

    return 0;
}
