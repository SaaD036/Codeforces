#include <iostream>
using namespace std;

int main(){
    int n, a, b, c, result = 0;
    cin>>n>>a>>b>>c;

    /**int tmp = 2*n;
    int a_need = tmp/a;
    int b_need = (tmp-a*a_need)/b;
    int c_need = tmp-a*a_need-b*b_need;

    while(true){
        cout<<a_need<<"  "<<b_need<<"  "<<c_need<<"  "<<endl;

        a_need--;

    }**/

    for(int i=0; i<=c; i++){
        for(int j=0; j<=b; j++){
            int total = 4*i + 2*j;
            int need = 2*n-total;

            if(need<=a && need>=0){
                result++;

                //cout<<i<<"  "<<j<<"  "<<need<<endl;
            }
        }
    }

    cout<<result;

    return 0;
}
