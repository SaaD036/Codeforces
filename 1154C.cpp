#include <bits/stdc++.h>
using namespace std;

int iterate(){
}

int solution(int f[], int d[], int i){
    int res=0, a=0, b=0, c=0;
    int ff[3] = {f[0], f[1], f[2]};

    res = min (ff[0]/3, ff[1]/2);
    res = min (res, ff[2]/2);

    ff[0] -= 3*res;
    ff[1] -= 2*res;
    ff[2] -= 2*res;

    res *= 7;

    for(int j=1; j<=7; j++){
        if(ff[d[i]] == 0) break;
        ff[d[i]]--;

        if(d[i]==0) a++;
        else if(d[i]==1)b++;
        else if(d[i]==2)c++;

        i++;
        if(i==7) i=0;
    }

    return res+a+b+c;
}

int main(){
    int day[7] = {1, 0, 0, 1, 2, 0, 2};
    int food[3], result = 0;
    cin>>food[0]>>food[1]>>food[2];

    for(int i=0; i<7; i++){
        result = max(result, solution(food, day, i));
    }

    cout<<result;

    return 0;
}
