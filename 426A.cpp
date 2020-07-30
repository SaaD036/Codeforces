#include <iostream>
using namespace std;

int main(){
    int n, s, result=0, maximum=0;
    cin>>n>>s;

    for(int i=0; i<n; i++){
        int tmp;
        cin>>tmp;

        result = result+tmp;

        if(tmp>maximum){
            maximum = tmp;
        }
    }

    if(result-maximum > s){
        cout<<"NO";
        ///cout<<result-maximum;
    }
    else{
        cout<<"YES";
    }

    return 0;
}
