#include <bits/stdc++.h>
#include <string>
using namespace std;



int main(){
    int t;
    cin>>t;
    string result[t];

    for(int i=0; i<t; i++){
        char a[18], s[18];
        cin>>a>>s;
        int na=strlen(a), ns=strlen(s);

        if(ns < na){
            result[i] = "-1";
        }
        else{
            int k=-2, j=-2;
            string res;

            for(k=ns-1, j=na-1; k>=0; k--, j--){
                if(j<0){
                    break;
                }

                if(s[k] >= a[j]){
                    char p = s[k]-a[j]+48;
                    string tmp(1, p);
                    res.append(tmp);
                }
                else{
                    if(s[k-1] == '1'){
                        char p = 10+s[k]-a[j]+48;
                        string tmp(1, p);
                        res.append(tmp);
                        k--;
                    }
                    else{
                        result[i] = "-1";
                        break;
                    }
                }
            }
            if(j==-1){
                for(j=k; j>=0; j--){
                    res.append(string(1, s[j]));
                }
                reverse(res.begin(), res.end());

                int p = res.length();
                for(j=0; j<p; j++){
                    if(res[j] != '0'){
                        break;
                    }
                    res[j] = '+';
                }

                result[i] = res;
            }
            else{
                result[i] = "-1";
            }
        }
    }

    for(int i=0; i<t; i++){
        string kk = result[i];
        int p = kk.length();

        for(int j=0; j<p; j++){
            if(kk[j] != '+'){
                cout<<kk[j];
            }
        }
        cout<<endl;
    }

    return 0;
}
