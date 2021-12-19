#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k, result=0, r=1, c=1;
    cin>>n>>k;
    bool a[n][n];
    char b[n];

    for(int i=0; i<n; i++){
        cin>>b;

        for(int j=0; j<n; j++){
            a[i][j] = b[j]=='.';
        }
    }

    for(int i=0; i<n; i++){
        int x, y;

        for(int j=0; j<n; j++){
            int x1=0, y1=0, x2=0, y2=0, tmp = 0;

            for(int p=j+1; p<n; p++){
                if(a[i][p]){
                    x1++;
                }
                else{
                    break;
                }
            }
            for(int p=j-1; p>=0; p--){
                if(a[i][p]){
                    x2++;
                }
                else{
                    break;
                }
            }
            for(int p=i+1; p<n; p++){
                if(a[p][j]){
                    y1++;
                }
                else{
                    break;
                }
            }
            for(int p=i-1; p>=0; p--){
                if(a[p][j]){
                    y2++;
                }
                else{
                    break;
                }
            }

            x = min(x1, k-1) + min(x2, k-1) - k + 2;
            y = min(y1, k-1) + min(y2, k-1) - k + 2;

            ///cout<<i+1<<" "<<j+1<<" : "<<x1<<" "<<x2<<" = "<<x<<" , "<<y1<<" "<<y2<<" = "<<y<<endl;

            if(x > 0){
                tmp += x;
            }

            if(y > 0){
                tmp += y;
            }

            if(tmp>result && a[i][j]){
                c = i+1;
                r = j+1;
                result = tmp;

                ///cout<<c<<" "<<r<<" "<<x<<" "<<y<<endl;
            }
        }
    }

    cout<<c<<" "<<r;

    return 0;
}
