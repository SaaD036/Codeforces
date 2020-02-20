#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main(){
    int a, b;
    char aa[10], bb[10];

    for(int i=0; i<10; i++){
        aa[i] = 'a';
        bb[i] = 'a';
    }

    cin>>aa;
    cin>>bb;

    a = strlen(aa);
    b = strlen(bb);

    ///cout<<a<<"  "<<b;

    sort(aa, aa+a);

    if(aa[0] == '0'){
        for(int i=1; i<a; i++){
            if(aa[i] != '0'){
                char temp = aa[i];
                aa[i] = aa[0];
                aa[0] = temp;
                break;
            }
        }
    }

    ///cout<<aa<<endl<<bb;

    if(a != b){
        cout<<"WRONG_ANSWER";
    }
    else{
        int flag=0;

        for(int i=0; i<a; i++){
            if(aa[i] != bb[i]){
                flag = 1;
                break;
            }
        }

        if(flag == 0){
            cout<<"OK";
        }
        else{
            cout<<"WRONG_ANSWER";
        }
    }

    return 0;
}
