#include <iostream>
#include <cstring>
using namespace std;


unsigned long long int charToNumber(char*a, int n){
    unsigned long long int ret = 0, p=1, k;

    for(int i=n; i>=0; i--){
        k = (a[i]-48)*p;
        p *= 10;

        ret = ret+k;

    }

    return ret;
}

int main(){
    char s[19];
    cin>>s;
    unsigned long long int a, p, q;
    int n = strlen(s);
    a = charToNumber(s, n-2);

    if(s[n-1] == 'f'){
        q=1;
    }
    else if(s[n-1] == 'e'){
        q=2;
    }
    else if(s[n-1] == 'd'){
        q=3;
    }
    else if(s[n-1] == 'a'){
        q=4;
    }
    else if(s[n-1] == 'b'){
        q=5;
    }
    else if(s[n-1] == 'c'){
        q=6;
    }

    if(a%4 == 0){
        p=(a-1)/4;
        p=p*2;
        p++;
    }
    else if(a%4 == 1){
        p=a/2;
    }
    else if(a%4 == 2){
        p=a/2;
    }
    else{
        p=(a-1)/4;
        p=p*2;
    }

    if(a%4==1 || a%4==2){
        cout<<p*6+q+a-1;
    }
    else{
        cout<<p*6+q+a-3;
    }

    return 0;
}
