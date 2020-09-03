#include <iostream>
using namespace std;

int maximum(int a, int b){
    if(a>b){
        return a;
    }
    return b;
}
int minimum(int a, int b){
    if(a<b){
        return a;
    }
    return b;
}

int main(){
    int n;
    cin>>n;
    int rect[n][2], tmp_max;
    bool flag=true;

    for(int i=0; i<n; i++){
        cin>>rect[i][0]>>rect[i][1];
    }

    tmp_max=maximum(rect[0][0], rect[0][1]);

    for(int i=1; i<n; i++){
        int tmp = maximum(rect[i][0], rect[i][1]);

        if(tmp<=tmp_max){
            tmp_max=tmp;
        }
        else{
            tmp = minimum(rect[i][0], rect[i][1]);

            if(tmp<=tmp_max){
                tmp_max=tmp;
            }
            else{
                flag=false;
                break;
            }
        }
    }

    if(flag){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    return 0;
}
