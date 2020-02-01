#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int s;
    double ss, sum=0, p=1.0;

    cin>>s;

    ss = (double) s;

    while(ss > 0){
        sum += p/ss;
        ss-=p;
    }

    printf("%.12lf", sum);

    return 0;
}

