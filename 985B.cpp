#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    char a[n][m];
    int light[m];
    bool flag;

    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<m; i++){
        light[i] = 0;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j] == '1'){
                light[j]++;
            }
        }
    }

    for(int i=0; i<n; i++){
        flag = true;

        for(int j=0; j<m; j++){
            if(a[i][j]=='1' && light[j]-1==0){
                flag=false;
                break;
            }
        }
        if(flag){
            ///cout<<i<<endl<<endl;
            break;
        }
    }

    if(flag){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    return 0;
}
