#include <iostream>
using namespace std;

int power(int a, int b){
    if(b==0){
        return 1;
    }

    int result = 1;

    for(int i=1; i<=b; i++){
        result = result*a;
    }

    return result;
}

int digit_in_number(int a, int b){
    int result=0;

    while(a!=0){
        result++;
        a=a/b;
    }
    return result;
}

int toDec(int a, int b){
    int result = 0, i=0;
    //cout<<a<<"   "<<b<<endl;

    while(a!=0){
        result += (a%10)*power(b, i);
        i++;
        a=a/10;
        //cout<<result<<endl;
    }
    return result;
}

int main(){
    int a, b, base=0, c;
    cin>>a>>b;

    c=a;
    while(c!=0){
        if(c%10 > base){
            base = c%10;
        }
        c=c/10;
    }
    c=b;
    while(c!=0){
        if(c%10 > base){
            base = c%10;
        }
        c=c/10;
    }

    int dec_a = toDec(a, base+1);
    int dec_b = toDec(b, base+1);

    ///cout<<dec_a<<"   "<<dec_b<<endl;

    cout<<digit_in_number(dec_a+dec_b, base+1);

    return 0;
}
