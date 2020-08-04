#include <iostream>
#include <cstring>
using namespace std;

int posOFe(char* a){
    int ret=0;

    while(true){
        if(a[ret] == 'e'){
            return ret;
        }
        ret++;
    }
}

int charToNumber(char* a, int n){
    int m=posOFe(a), ret=0, p=1;

    for(int i=n-1; i>m; i--){
        int k = (a[i]-48)*p;
        p=p*10;
        ret = ret+k;
    }
    return ret;
}

int main(){
    char a[204], b[204];
    cin>>a;
    int n=strlen(a), powr=charToNumber(a, n), pos_e=posOFe(a), ind=0;

    for(int i=0; i<pos_e; i++){
        if(a[i] != '.'){
            b[ind] = a[i];
            ind++;
        }
    }
    for(int i=ind; i<204; i++){
        b[i] = '0';
    }
    b[204]=NULL;

    //cout<<b;

    for(int i=0; i<=powr; i++){
        cout<<b[i];
    }
    int flag=-1;
    for(int i=203; i>powr; i--){
        if(b[i]  != '0'){
            flag=i;
            break;
        }
    }

    if(flag != -1){
        cout<<".";

        for(int i=powr+1; i<=flag; i++){
            cout<<b[i];
        }
    }

    /*int flag=0;
    for(int i=powr+1; i<204; i++){
        if(b[i] != '0'){
            flag==1;
            break;
        }
    }
    //cout<<flag;
    if(flag==0){
        cout<<".";
        for(int i=powr+1; b[i]!='0'; i++){
            cout<<b[i];
        }
    }*/

    return 0;
}
