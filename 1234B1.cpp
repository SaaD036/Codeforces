#include <iostream>
using namespace std;

int main(){
    int n, k, res=0;
    cin>>n>>k;
    unsigned long long int display[k], message[n];

    for(int i=0; i<n; i++){
        cin>>message[i];
    }
    for(int i=0; i<k; i++){
        display[i] = 0;
    }

    for(int i=0; i<n; i++){
        int flag = 0;

        for(int j=0; j<k; j++){
            if(display[j] == message[i]){
                flag = 1;
                break;
            }
        }

        if(flag == 0){
            for(int j=k-1; j>0; j--){
                display[j] = display[j-1];
            }
            display[0] = message[i];
        }
        /**for(int j=0; j<k; j++){
            cout<<display[j]<<"   ";
        }
        cout<<endl;**/
    }

    for(int i=0; i<k; i++){
        if(display[i] != 0){
            res++;
        }
        else{
            break;
        }
    }

    cout<<res<<endl;

    for(int i=0; i<res-1; i++){
        cout<<display[i]<<" ";
    }
    cout<<display[res-1];

    return 0;
}
