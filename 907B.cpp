#include  <bits/stdc++.h>
using namespace std;

int main(){
    string a[11];
    int x, y;

    for(int i=0; i<11; i++){
        getline(cin, a[i]);
    }

    cin>>x>>y;

    if(x%3 == 0){
        x = 3;
    }
    else{
        x = x%3;
    }

    if(y%3 == 0){
        y = 3;
    }
    else{
        y = y%3;
    }

    x = (x-1)*4;
    y = (y-1)*4;
    //ut<<x<<"  "<<y<<endl;
    bool flag=false;

    for(int i=x; i<x+3; i++){
        for(int j=y; j<y+3; j++){
            if(a[i][j] == '.'){
                flag=true;
                break;
            }
        }
        if(flag){
            break;
        }
    }

    if(flag){
            //ut<<"single"<<endl;
        for(int i=x; i<x+3; i++){
            for(int j=y; j<y+3; j++){
                if(a[i][j] == '.'){
                    a[i][j] = '!';
                }
            }
        }
    }
    else{
        for(int i=0; i<11; i++){
            for(int j=0; j<11; j++){
                if(a[i][j] == '.'){
                    a[i][j] = '!';
                }
            }
        }
    }

    for(int i=0; i<11; i++){
        cout<<a[i]<<endl;
    }


    return 0;
}
