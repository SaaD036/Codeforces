#include <iostream>
using namespace std;

int main(){
    int n, v, index=-1, total=0;
    cin>>n>>v;
    int proportion[n], gradient[n];
    double tmp_p=1.0, result=0.0;

    for(int i=0; i<n; i++){
        cin>>proportion[i];
        total += proportion[i];
    }
    for(int i=0; i<n; i++){
        cin>>gradient[i];

        int a = gradient[i]*total;
        int b = proportion[i]*v;
        double tmp = (double) a/b;

        if(tmp_p > tmp){
            index = i;
            tmp_p = tmp;
        }
    }

    if(index == -1){
        cout<<v;
    }
    else{
        for(int i=0; i<n; i++){
            int tmp = gradient[index]*proportion[i];
            double a = (double) tmp/proportion[index];

            result += a;
        }

        cout<<result;
    }

    return 0;
}
