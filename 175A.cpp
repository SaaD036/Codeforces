#include <iostream>
#include <cstring>
using namespace std;

int toInteger(char* a, int f_index, int l_index){
    int power = 1, result=0;

    for(int i=l_index; i>=f_index; i--){
        result += (a[i]-48)*power;
        power *= 10;
    }

    return result;
}

bool isValid(char* a, int f_index, int l_index){

    if(l_index-f_index+1 > 7){
        return false;
    }
    else if(l_index-f_index+1 == 7){
        int tmp = toInteger(a, f_index, l_index);

        if(tmp != 1000000){
            return false;
        }
    }
    else if(l_index-f_index+1<7 && l_index-f_index+1>1){
        if(a[f_index] == '0'){
            return false;
        }
    }
    return true;
}

int main(){
    char a[30];
    cin>>a;
    int len = strlen(a), result=-1;

    for(int i=1; i<len-1; i++){
        for(int j=i+1; j<len; j++){
            if(isValid(a, 0, i-1) && isValid(a, i, j-1) && isValid(a, j, len-1)){
                int tmp = toInteger(a, 0, i-1) + toInteger(a, i, j-1) + toInteger(a, j, len-1) ;
                if(result < tmp){
                    result = tmp;
                }
            }
        }
    }

    cout<<result;

    return 0;
}
