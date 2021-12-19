#include <bits/stdc++.h>
using namespace std;

bool isValid(int x, int y, int n){
    if(x>=n || x<0){
        return false;
    }
    if(y>=n || y<0){
        return false;
    }

    return true;
}

int main(){
    int n, r1, c1, r2, c2, result=5001;
    cin>>n;
    cin>>r1>>c1;
    cin>>r2>>c2;

    string a[n];
    bool b[n][n], cc[n][n];
    vector<int> start_x, start_y, target_x, target_y;
    queue<int> q_c, q_r;

    for(int i=0; i<n; i++){
        cin>>a[i];

        for(int j=0; j<n; j++){
            if(a[i][j] == '0'){
                b[i][j] = cc[i][j] = true;
            }
            else{
                b[i][j] = cc[i][j] = false;
            }
        }
    }

    q_c.push(c1-1);
    q_r.push(r1-1);
    start_x.push_back(r1-1);
    start_y.push_back(c1-1);
    b[r1-1][c1-1] = false;

    while(!q_c.empty()){
        int r = q_r.front();
        q_r.pop();
        int c = q_c.front();
        q_c.pop();

        if(isValid(r+1, c, n) && b[r+1][c]){
            q_r.push(r+1);
            q_c.push(c);
            start_x.push_back(r+1);
            start_y.push_back(c);
            b[r+1][c] = false;
        }
        if(isValid(r-1, c, n) && b[r-1][c]){
            q_r.push(r-1);
            q_c.push(c);
            start_x.push_back(r-1);
            start_y.push_back(c);
            b[r-1][c] = false;
        }
        if(isValid(r, c+1, n) && b[r][c+1]){
            q_r.push(r);
            q_c.push(c+1);
            start_x.push_back(r);
            start_y.push_back(c+1);
            b[r][c+1] = false;
        }
        if(isValid(r, c-1, n) && b[r][c-1]){
            q_r.push(r);
            q_c.push(c-1);
            start_x.push_back(r);
            start_y.push_back(c-1);
            b[r][c-1] = false;
        }
    }

    q_c.push(c2-1);
    q_r.push(r2-1);
    target_x.push_back(r2-1);
    target_y.push_back(c2-1);
    cc[r2-1][c2-1] = false;

    while(!q_c.empty()){
        int r = q_r.front();
        q_r.pop();
        int c = q_c.front();
        q_c.pop();

        if(isValid(r+1, c, n) && cc[r+1][c]){
            q_r.push(r+1);
            q_c.push(c);
            target_x.push_back(r+1);
            target_y.push_back(c);
            cc[r+1][c] = false;
        }
        if(isValid(r-1, c, n) && cc[r-1][c]){
            q_r.push(r-1);
            q_c.push(c);
            target_x.push_back(r-1);
            target_y.push_back(c);
            cc[r-1][c] = false;
        }
        if(isValid(r, c+1, n) && cc[r][c+1]){
            q_r.push(r);
            q_c.push(c+1);
            target_x.push_back(r);
            target_y.push_back(c+1);
            cc[r][c+1] = false;
        }
        if(isValid(r, c-1, n) && cc[r][c-1]){
            q_r.push(r);
            q_c.push(c-1);
            target_x.push_back(r);
            target_y.push_back(c-1);
            cc[r][c-1] = false;
        }
    }

    for(int i=0; i<start_x.size(); i++){
        for(int j=0; j<target_x.size(); j++){
            int tmpx = (target_x[j]-start_x[i])*(target_x[j]-start_x[i]);
            int tmpy = (target_y[j]-start_y[i])*(target_y[j]-start_y[i]);

            if(tmpx+tmpy < result){
                result = tmpx+tmpy;
            }
        }
    }

    cout<<result;

    return 0;
}
