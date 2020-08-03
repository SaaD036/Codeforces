#include <iostream>
using namespace std;

int minimum(int a, int b){
    if(a>b){
        return 0;
    }
    else{
        return b;
    }
}

int min_in_array(int* a, int n){
    int ret=a[0];

    for(int i=1; i<n; i++){
        if(ret > a[i]){
            ret = a[i];
        }
    }
    return ret;
}

int main(){
    int n, flag=-1;
    cin>>n;
    int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        if(a[i] <= i){
            flag=i;
            break;
        }
    }

    if(flag != -1){
        cout<<flag+1;
    }

    else{
        int tmp = min_in_array(a, n)/n;

        for(int i=0; i<n; i++){
            a[i] = a[i]-n*tmp;
            //cout<<a[i]<<" ";
        }

        while(flag < 0){
            for(int i=0; i<n; i++){
                if(a[i] <= i){
                    flag=i;
                    break;
                }
            }
            for(int i=0; i<n; i++){
                a[i] = minimum(0, a[i]-n);
            }
        }

        //cout<<endl<<tmp;

        cout<<flag+1;
    }

    return 0;
}
