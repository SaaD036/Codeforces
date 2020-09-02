#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

bool in_range(int x, int y, int n, int m){
    if( (x>=0&&x<n) && (y>=0&&y<m) ){
        return true;
    }
    return false;
}

int main(){
    int n, m;
    cin>>n>>m;
    char a[n][m];
    bool flag=true;

    for(int i=0; i<n; i++){
        cin>>a[i];
        a[i][m]=NULL;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            int bomb=0;

            if(in_range(i-1, j-1, n, m)==true && a[i-1][j-1]=='*'){
                bomb++;
            }
            if(in_range(i-1, j, n, m)==true && a[i-1][j]=='*'){
                bomb++;
            }
            if(in_range(i-1, j+1, n, m)==true && a[i-1][j+1]=='*'){
                bomb++;
            }
            if(in_range(i, j-1, n, m)==true && a[i][j-1]=='*'){
                bomb++;
            }
            if(in_range(i, j+1, n, m)==true && a[i][j+1]=='*'){
                bomb++;
            }
            if(in_range(i+1, j-1, n, m)==true && a[i+1][j-1]=='*'){
                bomb++;
            }
            if(in_range(i+1, j, n, m)==true && a[i+1][j]=='*'){
                bomb++;
            }
            if(in_range(i+1, j+1, n, m)==true && a[i+1][j+1]=='*'){
                bomb++;
            }

            ///cout<<i<<"  "<<j<<endl;

            if(a[i][j]=='.' && bomb!=0){
                ///cout<<bomb<<endl<<endl;
                flag = false;
                break;
            }
            else if( (a[i][j]>='1'&&a[i][j]<='8') && a[i][j]-48!=bomb){
                ///cout<<bomb<<endl<<endl;
                flag=false;
                break;
            }
            bomb=0;

        }
        if(flag==false)
            break;
    }

    if(flag){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }


    return 0;
}
