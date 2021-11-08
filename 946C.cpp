#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char a[100000], compare='a';
    cin>>a;
    int n = strlen(a);

    for(int i=0; i<n; i++){
        if(a[i] <= compare){
            a[i] = compare;
            compare++;
        }

        if(compare > 'z'){
            break;
        }
    }

    if(compare <= 'z'){
        cout<<"-1";
    }
    else{
        cout<<a;
    }

    return 0;
}
