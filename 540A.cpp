#include <iostream>
using namespace std;

int minimum(int a, int b){
    if(a<b){
        return a;
    }
    return b;
}
int maximum(int a, int b){
    if(a>b){
        return a;
    }
    return b;
}

int main(){
    int n, result=0;
    cin>>n;
    char a[n], b[n];
    cin>>a;
    cin>>b;

    //cout<<endl<<a<<endl<<b;

    for(int i=0; i<n; i++){
        int tmp1 = a[i]-48, tmp2 = b[i]-48;
        int p = maximum(tmp1, tmp2) - minimum(tmp1, tmp2);

        //cout<<tmp1<<"  "<<tmp2<<"   "<<p<<"   "<<minimum(p, 10-p)<<endl;
        result += minimum(p, 10-p);
    }

    cout<<result;

    return 0;
}
