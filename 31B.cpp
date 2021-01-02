#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char a[200];
    cin>>a;
    int n = strlen(a), last=-1;

    for(int i=n-1; i>=0; i--){
        if(a[i]=='@'){
            last=i;
            break;
        }
    }

    if(last == -1){
        cout<<"No solution";
    }
    else if(a[0]=='@' || a[n-1]=='@'){
        cout<<"No solution";
    }
    else{
        int tmp=-2;
        bool flag=true;

        for(int i=0; i<n; i++){

            if(a[i]=='@'){
                if(i-tmp > 2){
                    tmp=i;
                }
                else{
                    flag = false;
                    break;
                }
            }
        }

        if(flag){
            for(int i=0; i<n; i++){
                cout<<a[i];

                if(a[i-1]=='@' && i<last){
                    cout<<",";
                }
            }
        }
        else{
            cout<<"No solution";
        }
    }

    return 0;
}
