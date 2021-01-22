#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int x, y;
    cin>>x>>y;
    double xx, yy;

    if(x==y){
        cout<<"=";
    }
    else{
        xx = (double)y;
        yy = (double)x;
        yy = yy*log10(y)/log10(x);

        if(xx==yy){
            cout<<"=";
        }
        else if(xx>yy){
            cout<<">";
        }
        else{
            cout<<"<";
        }
    }

    return 0;
}
