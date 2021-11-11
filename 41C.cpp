#include <iostream>
#include <cstring>
using namespace std;

int findAt(char* a, int n){
    for(int i=1; i<n-2; i++){
        if(a[i]=='a' && a[i+1]=='t'){
            return i;
        }
    }

    return -1;
}

int main(){
    char a[100];
    cin>>a;
    int n = strlen(a);

    int tmp = findAt(a, n);
    if(findAt(a, n) != -1){
        a[tmp] = a[tmp+1] = '@';
    }

    for(int i=1; i<n-3; i++){
        if(a[i]=='d' && a[i+1]=='o' && a[i+2]=='t'){
            a[i] = a[i+1] = a[i+2] = '.';
        }
    }

    for(int i=0; i<n; i++){
        cout<<a[i];

        if(a[i]=='@'){
            i++;
        }
        if(a[i]=='.'){
            i+=2;
        }
    }

    return 0;
}
