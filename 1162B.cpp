#include <bits/stdc++.h>
using namespace std;

int minimum(int a, int b){
    if(a < b){
        return a;
    }
    return b;
}

int maximum(int a, int b){
    if(a > b){
        return a;
    }
    return b;
}

int main(){
    int n, m;
    cin>>n>>m;
    int a[n][m], b[n][m];
    bool flag = true;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>b[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j] <= b[i][j]){
                int tmp = a[i][j];
                a[i][j] = b[i][j];
                b[i][j] = tmp;
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            ///cout<<b[i][j]<<"  ";
            if(i==0 && j!=0){
                if(a[i][j] <= a[i][j-1]){
                    flag=false;
                    break;
                }
                if(b[i][j] <= b[i][j-1]){
                    flag=false;
                    break;
                }
            }
            else if(i!=0 && j==0){
                if(a[i][j] <= a[i-1][j]){
                    flag=false;
                    break;
                }
                if(b[i][j] <= b[i-1][j]){
                    flag=false;
                    break;
                }
            }
            else if(i!=0 && j!=0){
                if(a[i][j]<=a[i][j-1] || a[i][j]<=a[i-1][j]){
                    flag=false;
                    break;
                }
                if(b[i][j]<=b[i][j-1] || b[i][j]<=b[i-1][j]){
                    flag=false;
                    break;
                }
            }
        }///cout<<endl;

        if(!flag){
            break;
        }
    }

    if(flag){
        cout<<"Possible";
    }
    else{
        cout<<"Impossible";
    }

    return 0;
}
