#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char a[100], b[100];
    cin>>a;
    int n, flag=1, index=1;

    n = strlen(a);
    b[0] = '/';

    for(int i=0; i<n; i++){
        if(flag == 0 && a[i]== '/'){
            b[index] = a[i];
            flag = 1;
            index++;
        }
        if(a[i] != '/'){
            b[index] = a[i];
            flag = 0;
            index++;
        }
    }

    if(b[index-1] == '/' && index > 1){
        b[index-1] = ' ';
    }
    b[index] = NULL;

    cout<<b;

    return 0;
}
