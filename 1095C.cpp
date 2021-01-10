#include <iostream>
using namespace std;

int power(int a){
    int result=0, number=1;

    if(a==1){
        return 0;
    }
    while(number <= a){
        number = number * 2;
        result++;
    }
    return result-1;
}

int power_of_two(int a){
    int result = 1;

    if(a==0){
        return 1;
    }

    for(int i=1; i<=a; i++){
        result = result*2;
    }

    return result;
}

int main(){
    int n, k, p, tmp=0, index;
    cin>>n>>k;

    index = power(n);
    int a[index+1];
    p=n;

    for(int i=0; i<=index; i++){
        a[i] = 0;
    }

    for(int i=index; i>=0; i--){

        if(power_of_two(i) <= p){
            ///cout<<power_of_two(i)<<"  ";
            p = p-power_of_two(i);
            tmp++;
            a[i]++;
        }

        if(p==0){
            break;
        }
    }

    if(k>n){
        cout<<"NO";
    }
    else if(k < tmp){
        cout<<"NO";
    }
    else if(k == n){
        cout<<"YES"<<endl;

        for(int i=0; i<k; i++){
            cout<<"1 ";
        }
    }
    else{
        for(int i=index; tmp!=k; i--){
            for(int j=a[i]; j>0; j--){
                a[i]--;
                a[i-1] = a[i-1] + 2;
                tmp++;

                if(tmp == k){
                    break;
                }
            }
        }

        cout<<"YES"<<endl;
        for(int i=0; i<=index; i++){
            for(int j=1; j<=a[i]; j++){
                cout<<power_of_two(i)<<" ";
            }
        }
    }

    return 0;
}
