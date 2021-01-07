#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        int n, total=0, tmp, count_2=0, count_1=0, get_a=0, get_b=0;
        cin>>n;

        for(int i=0; i<n; i++){
            cin>>tmp;
            total += tmp;

            if(tmp == 1){
                count_1++;
            }
            else{
                count_2++;
            }
        }

        if(total%2 == 0){
            if(count_2%2 == 0){

                if(count_1%2==0){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
            else{

                if(count_1 < 2){
                    cout<<"NO"<<endl;
                }
                else if(count_1%2==0){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }


        }
        else{
            cout<<"NO"<<endl;;
        }
    }

    return 0;
}
