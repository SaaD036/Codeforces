#include <bits/stdc++.h>
using namespace std;

int main(){
    char a[200000];
    int len, result=0, tmp=0, prev=0;
    cin>>a;
    len =strlen(a);

    for(int i=0; i<len; i++){
        if((a[i]-'0')%3 ==0){
            result++;
            tmp = 0;
            prev = i;
        }
        else{
            tmp += a[i]-'0';

            if(tmp%3 == 0){
                result++;
                tmp = 0;
                prev = i;
            }
            else{
                int p=0;

                for(int j=i; j>prev; j--){
                    p += a[j]-'0';

                    if(p%3 == 0){
                        result++;
                        tmp = 0;
                        prev = i;

                        break;
                    }
                }
            }
        }
    }

    cout<<result;

    return 0;
}
