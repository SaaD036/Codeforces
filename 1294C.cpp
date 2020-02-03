#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    unsigned long int n[t];

    for(int i=0; i<t; i++){
        cin>>n[i];
    }

    for(int i=0; i<t; i++){
        int sqr_n = sqrt(n[i]), p=0, flag=0;
        unsigned long int factor[sqr_n];

        for(unsigned long int j=2; j<=sqr_n; j++){
            if(n[i]%j == 0){
                factor[p] = j;
                p++;

                if(n[i]/j != j){
                    factor[p] = n[i]/j;
                    p++;
                }
            }
        }

        if(p<3){
            cout<<"NO";
        }
        else{
            for(int a=0; a<p-2; a++){
                for(int b=a+1; b<p-1; b++){
                    for(int c=b+1; c<p; c++){
                        if(factor[a] * factor[b] * factor[c] == n[i]){
                            cout<<"YES"<<endl<<factor[a]<<" "<<factor[b]<<" "<<factor[c];
                            flag=1;
                            break;
                        }
                    }
                    if(flag==1){
                        break;
                    }
                }
                if(flag==1){
                    break;
                }
            }

            if(flag != 1){
                cout<<"NO";
            }
        }
        /*for(int k=0; k<p; k++){
            cout<<factor[k]<<"  ";
        }*/
        if(i<t-1){
            cout<<endl;
        }
    }

    return 0;
}
