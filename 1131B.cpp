#include <iostream>
using namespace std;

/**unsigned long long int minimum(unsigned long long int x, unsigned long long int y, unsigned long long int a, unsigned long long int b){
    if(x-b < y-a){
        return x-b;
    }
    else{
        return y-a;
    }
}
unsigned long long int maximum(unsigned long long int x, unsigned long long int y, unsigned long long int a, unsigned long long int b){
    if(x-b > y-a){
        return x-b;
    }
    else{
        return y-a;
    }
}*/

int main(){
    int n;
    cin>>n;
    unsigned long long int a=0, b=0, result=1, x, y;

    for(int i=0; i<n; i++){
        cin>>x>>y;

        if(a == b){
            if(x > y){
                result = result + (y-b);
            }
            else if(y > x){
                result = result + (x-a);
            }
            else if(x == y){
                result = result + (x-a);
            }
        }
        else if(a > b){
            if(x == y){
                result = result + (x-a+1);
            }
            else if(x > y){
                if(y >= a){
                    result = result + (y-a+1);
                }
            }
            else if(y > x){
                if(y >= a){
                    result = result + (x-a+1);
                }
            }
        }
        else if(a < b){
            if(x == y){
                result = result + (y-b+1);
            }
            else if(x > y){
                if(x >= b){
                    result = result + (y-b+1);
                }
            }
            else if(y > x){
                if(x >= b){
                    result = result + (x-b+1);
                }
            }
        }
        a = x;
        b = y;
    }

    cout<<result;

    return 0;
}
