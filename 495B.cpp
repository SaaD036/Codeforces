#include <iostream>
#include <math.h>
using namespace std;

int main(){
    unsigned long int a, b, result=0;
    cin>>a>>b;

    if(a>b){
        unsigned long int c =sqrt(a-b);

        for(unsigned long int i=1; i<=c; i++){
            if((a-b)%i == 0){
                if(i == (a-b)/i){
                    if(i > b){
                        result++;
                    }
                }
                else{
                    if(i>b){
                        result++;
                    }
                    if((a-b)/i > b){
                        result++;
                    }
                }
            }
        }
        cout<<result;
    }
    else if(a==0 && b!=0){
        cout<<"0";
    }
    else if(a==b){
        cout<<"infinity";
    }
    else{
        cout<<"0";
    }

    return 0;
}
