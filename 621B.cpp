#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    unsigned long long int res=0;
    cin>>n;
    bool board[1000][1000];

    for(int i=0; i<1000; i++){
        for(int j=0; j<1000; j++){
            board[i][j]=false;
        }
    }

    for(int i=0; i<n; i++){
        int a, b;
        cin>>a>>b;

        board[a-1][b-1] = true;
    }


    for(int i=0, j=0; i<1000; i++){
        int tmp=0;

        for(int ii=i, jj=j; ; ii--, jj++){
            if(board[ii][jj]) tmp++;

            if(ii==0) break;
        }

        res += (tmp*(tmp-1));
    }

    for(int i=999, j=1; j<1000; j++){
        int tmp=0;

        for(int ii=i, jj=j; ; ii--, jj++){
            if(board[ii][jj]) tmp++;

            if(jj==999) break;
        }

        res += (tmp*(tmp-1));
    }

    for(int i=0, j=0; j<1000; j++){
        int tmp=0;

        for(int ii=i, jj=j; ; ii++, jj++){
            if(board[ii][jj]) tmp++;

            if(jj==999) break;
        }

        res += (tmp*(tmp-1));
    }

    for(int i=1, j=0; i<1000; i++){
        int tmp=0;

        for(int ii=i, jj=j; ; ii++, jj++){
            if(board[ii][jj]) tmp++;

            if(ii==999) break;
        }

        res += (tmp*(tmp-1));
    }

    cout<<res/2;

    return 0;
}
