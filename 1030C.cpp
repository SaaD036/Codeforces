#include <iostream>
using namespace std;

int toIntegerSum(char* a, int s, int e){
    int result = 0;

    for(int i=s; i<=e; i++){
        result += (a[i]-48);
    }

    return result;
}

int getNonZeroNumber(char* a, int n){
    int non_zero = 0;

    for(int i=0; i<n; i++){
        if(a[i] != '0'){
            non_zero++;
        }
    }

    return non_zero;
}

int main(){
    int n, non_zero=0, last;
    cin>>n;
    char a[n];
    cin>>a;
    bool flag = false;

    if(getNonZeroNumber(a, n) == 0){
        cout<<"YES";
    }
    else{
        non_zero = getNonZeroNumber(a, n);
        char b[non_zero];

        for(int i=0, j=0; i<n; i++){
            if(a[i] != '0'){
                b[j] = a[i];
                j++;
            }
        }
        b[non_zero] = NULL;

        for(int i=1; i<non_zero; i++){
            int f_section = toIntegerSum(b, 0, i-1);

            int next_first_index = i;
            int next_last_index = i;

            while(next_last_index < non_zero){
                int tmp_section = toIntegerSum(b, next_first_index, next_last_index);

                next_last_index++;

                if(f_section == tmp_section){
                    //cout<<next_first_index<<"  "<<tmp_section<<endl;

                    next_first_index = next_last_index;

                    flag = true;
                }
                else{
                    flag = false;
                }
            }

            if(flag){
                break;
            }
        }

        if(flag){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
    return 0;
}
