#include <iostream>
using namespace std;

int main(){
    int n, tmp=0;
    cin>>n;
    int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]>tmp){
            tmp = a[i];
        }
    }
    int previous[tmp], difference[tmp];

    for(int i=0; i<tmp; i++){
        previous[i] =  0;
        difference[i] = -1;
    }

    for(int i=0; i<n; i++){
        int current_difference, pos=a[i]-1;

        if(previous[pos] !=0){
            current_difference = i+1- previous[pos];
        }
        else{
            current_difference = 0;
        }

        if(difference[pos] > 0){
            if(difference[pos] != current_difference){
                difference[pos] = -2;
            }
        }
        else if( (difference[pos]==0) || (difference[pos]==-1) ){
            difference[pos] = current_difference;
        }

        previous[pos] = i+1;
    }
    int nmbr=0;
    for(int i=0; i<tmp; i++){
        if(difference[i] >= 0){
            nmbr++;
        }
    }

    cout<<nmbr<<endl;

    for(int i=0; i<tmp; i++){
        if(difference[i] >= 0){
            cout<<i+1<<" "<<difference[i]<<endl;
        }
    }

    return 0;
}
