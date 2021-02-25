#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    char a[n][m];
    int distance[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    for(int i=0; i<n; i++){
        int g, s;

        for(int j=0; j<m; j++){
            if(a[i][j] == 'G'){
                g = j;
            }
            else if(a[i][j] == 'S'){
                s = j;
            }
        }

        distance[i] = s-g-1;
    }

    sort(distance, distance+n);

    if(distance[0] < 0){
        cout<<"-1";
    }
    else{
        int result=1;

        /**if(distance[0] == 0){
            result = 0;
        }
        else{
            result = 1;
        }**/

        for(int i=1; i<n; i++){
            if(distance[i] != distance[i-1]){
                result++;
            }
        }

        cout<<result;

    }

    return 0;
}
