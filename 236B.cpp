#include <iostream>
#include <math.h>
using namespace std;

int d_value(int a){
    if(a==1){
        return 1;
    }
    else if(a==2 || a==3){
        return 2;
    }

    int result=2, tmp=sqrt(a);

    for(int j=2; j<=tmp; j++){
        if(a%j == 0){
            result+=2;
        }
    }

    if(tmp*tmp == a){
        result = result - 1;
    }

    return result;
}

int main(){
    int a, b, c, result=0;

    cin>>a>>b>>c;

    for(int i=1; i<=a; i++){
        for(int j=1; j<=b; j++){
            for(int k=1; k<=c; k++){
                result += d_value(i*j*k);
                ///cout<<i<<"  "<<j<<"  "<<k<<"  "<<d_value(i*j*k)<<endl;
            }
        }
    }

    cout<<result%1073741824;

    return 0;
}
