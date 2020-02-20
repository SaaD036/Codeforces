#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main(){
    int n,m, numberOFfruit=1, min_res=0, max_res=0;
    cin>>n>>m;
    int label[n];
    string fruit[m];

    for(int i=0; i<n; i++){
        cin>>label[i];
    }
    sort(label, label+n);

    for(int i=0; i<m; i++){
        cin>>fruit[i];
    }
    sort(fruit, fruit+m);

    /**for(int i=0; i<n; i++){
        cout<<label[i]<<"  ";
    }
    cout<<endl;
    for(int i=0; i<m; i++){
        cout<<fruit[i]<<endl;
    }**/

    for(int i=1; i<m; i++){

        if(fruit[i]!=fruit[i-1]){
            numberOFfruit++;
        }
    }

    int numBer[numberOFfruit];
    numBer[0] = 1;

    for(int i=1,j=0; i<m; i++){
        if(fruit[i]==fruit[i-1]){
            numBer[j]++;
        }
        else{
            j++;
            numBer[j] = 1;
        }
    }

    /**for(int i=0; i<numberOFfruit; i++){
        cout<<numBer[i]<<"  ";
    }**/
    sort(numBer, numBer+numberOFfruit);


        for(int i=numberOFfruit-1, j=0; i>=0; i--, j++){
            min_res = min_res + numBer[i]*label[j];
        }
        for(int i=numberOFfruit-1, j=n-1; i>=0; i--, j--){
            max_res = max_res + numBer[i]*label[j];
        }

        cout<<min_res<<" "<<max_res;



    return 0;
}
