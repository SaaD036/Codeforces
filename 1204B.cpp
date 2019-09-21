#include <iostream>
using namespace std;

int main(){
    int n, l, r;
    cin>>n>>l>>r;
    unsigned long int lower=0, upper=0, number=1;

    for(int i=0; i<l; i++){
        lower = lower + number;
        number *= 2;
    }
    number = 1;
    lower = lower + (n-l);

    for(int i=0; i<r; i++){
        upper = upper + number;
        number *= 2;
    }
    number = number/2;
    upper = upper + (n-r)*number;

    cout<<lower<<" "<<upper;


    return 0;
}
