#include <iostream>
using namespace std;

int main(){
    int n, t, c, result=0, tmp=0;
    cin>>n>>t>>c;
    int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];

        if(a[i]>t){
            if(tmp>=c){
                result+=tmp-c+1;
            }
            tmp=0;
            ///cout<<"Hi"<<endl;
        }
        else{
            tmp++;
        }
    }///cout<<result<<"   "<<tmp<<endl;

    if(tmp>=c){
        result+=tmp-c+1;
    }

    cout<<result;

    return 0;
}
