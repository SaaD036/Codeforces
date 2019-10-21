#include <iostream>
using namespace std;

int maxi(int a, int b){
    if(a > b){
        return a;
    }
    else{
        return b;
    }
}

int mini(int a, int b){
    if(a < b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    int m, n, sum=0, val=1;
    cin>>m>>n;
    int a[m][n];

    for (int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }

    /*3 3
1 2 3
2 0 4
4 5 63 3
1 2 3
2 0 4
4 5 6for (int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++){

            if(a[i][j] == 0){

                if(i==0 && j==0){
                    a[i][j] = 1;
                }
                else if(i==0 && j!=0){
                    a[i][j] = a[i][j-1]+1;
                }
                else if(j==0 && i!=0){
                    a[i][j] = a[i-1][j]+1;
                }
                else if(i!=0 && j!=0){
                    a[i][j] = maxi(a[i][j-1], a[i-1][j]) + 1;
                }
            }
        }
    }*/

    for(int i=m-2; i>=0; i--){
        for(int j=n-2; j>=0; j--){
            if(a[i][j]==0){
                a[i][j] = mini(a[i][j+1], a[i+1][j]) - 1;
            }
        }
    }

   for (int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            ///cout<<a[i][j]<<"   ";
            sum+=a[i][j];
            if( (i!=m-1) && (j!=n-1) ){
                if((a[i][j] < 1) || (a[i][j] >= a[i][j+1]) || (a[i][j] >= a[i+1][j])){
                    val = 0;
                }
            }
            else if( (i==m-1) && (j!=n-1) ){
                if( (a[i][j] < 1) || (a[i][j] >= a[i][j+1]) ){
                    val = 0;
                }
            }
            else if( (i!=m-1) && (j==n-1) ){
                if( (a[i][j] < 1) || (a[i][j] >= a[i+1][j]) ){
                    val = 0;
                }
            }


        }
        ///cout<<endl;
    }

    if(val == 0){
        cout<<"-1";
    }
    else{
        cout<<sum;
    }

    return 0;
}
