#include <iostream>
using namespace std;

int length(char* a){
    int len=0;

    for(len=0; a[len]!=NULL; len++){
    }
    return len;
}

int main(){
    int t;
    cin>>t;
    char b_or_n[t][100000];
    int len[t];

    for(int i=0; i<t; i++){
        cin>>b_or_n[i];
        len[i] = length(b_or_n[i]);
    }
    for(int i=0; i<t; i++){
        int tmp = len[i];

        for(int j=0; j<tmp-1; j++){
            if( (b_or_n[i][j]!='?') && (b_or_n[i][j]==b_or_n[i][j+1]) ){
                b_or_n[i][0] = '1';
                break;
            }
        }
    }

    for(int i=0; i<t; i++){
        int tmp = len[i];

        if(b_or_n[i][0] == '1'){
            cout<<"-1"<<endl;
        }
        else{
            for(int j=0; j<tmp; j++){
                char p;

                if(b_or_n[i][j] != '?'){
                    p = b_or_n[i][j];
                }
                else{
                    if(b_or_n[i][j-1]!='a' && b_or_n[i][j+1]!='a'){
                        p='a';
                        b_or_n[i][j]=p;
                    }
                    else if(b_or_n[i][j-1]!='b' && b_or_n[i][j+1]!='b'){
                        p='b';
                        b_or_n[i][j]=p;
                    }
                    else if(b_or_n[i][j-1]!='c' && b_or_n[i][j+1]!='c'){
                        p='c';
                        b_or_n[i][j]=p;
                    }
                }
                cout<<p;
            }
            cout<<endl;
        }
    }

    return 0;
}
