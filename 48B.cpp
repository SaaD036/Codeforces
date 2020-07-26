#include <iostream>
using namespace std;

int main(){
    int n, m, a, b, result = 1000000000;
    cin>>n>>m;
    int aa[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>aa[i][j];
        }
    }
    cin>>a>>b;

    for(int i=0; i<=n-a; i++){
        for(int j=0; j<=m-b; j++){
            int sum = 0;
            for(int k=0; k<a; k++){
                for(int l=0; l<b; l++){
                    sum = sum + aa[i+k][j+l];
                }
            }
            if(sum<result){
                result = sum;
            }
        }
    }

    for(int i=0; i<=n-b; i++){
        for(int j=0; j<=m-a; j++){
            int sum = 0;
            for(int k=0; k<b; k++){
                for(int l=0; l<a; l++){
                    sum = sum + aa[i+k][j+l];
                }
            }
            if(sum<result){
                result = sum;
            }
        }
    }

    cout<<result;

    return 0;
}
