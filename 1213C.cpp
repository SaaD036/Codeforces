#include <iostream>
using namespace std;

int main(){
    int q;
    cin>>q;
    unsigned long long int result[q];

    for(int i=0; i<q; i++){
        unsigned long long int page, divisor, res=0, div, p, q;
        cin>>page>>divisor;
        div = divisor;

        if(page >= divisor*10){
            p = divisor * 10;
            q = page/p;

            while(div <= divisor*10){
                res = res + div%10;
                div = div + divisor;
            }

            res = res * q;
            div = p*q + divisor;

            while(div <= page){
                res = res + div%10;
                div = div + divisor;
            }            
        }
        else{
            while(div <= page){
                res = res + div%10;
                div = div + divisor;
            }
        }
        result[i] = res;
    }

    for (int i=0; i<q-1; i++)
    {
        cout<<result[i]<<endl;
    }
    cout<<result[q-1];

    return 0;
}
