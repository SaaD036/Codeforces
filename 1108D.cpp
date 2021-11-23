#include <bits/stdc++.h>
using namespace std;

char getNewColor(char b, char c){
    if(b == c){
        if(b == 'R'){
            return 'G';
        }
        else{
            return 'R';
        }
    }
    else{
        if(b=='R'&&c=='G' || b=='G'&&c=='R'){
            return 'B';
        }
        else if(b=='R'&&c=='B' || b=='B'&&c=='R'){
            return 'G';
        }
        else if(b=='B'&&c=='G' || b=='G'&&c=='B'){
            return 'R';
        }
    }
}

int solution(char* a, int n){
    int consec = 0, result=0;

    for(int i=1; i<n; i++){
        if(a[i] == a[i-1]){
            if(i == n-1){
                a[i] = getNewColor(a[i-1], a[i-1]);
            }
            else{
                a[i] = getNewColor(a[i-1], a[i+1]);
            }

            result++;
        }
    }

    return result;
}

int main(){
    int n;
    cin>>n;
    char a[n];
    cin>>a;

    cout<<solution(a, n)<<endl<<a;



    return 0;
}
