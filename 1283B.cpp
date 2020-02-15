#include <iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	unsigned long long int result[t];

	for(int i=0; i<t; i++){
		unsigned long long int n, k, temp, rem;
		cin>>n>>k;

        rem = n%k;

		if(rem == 0){
			result[i] = n;
		}
		else{
			temp = n/k;
			temp = temp*k;

			///cout<<temp<<"  "<<rem<<"  "<<k/2<<endl;

			if(rem < k/2){
				result[i] = temp+rem;
			}
			else{
				result[i] = temp+k/2;
			}
		}
	}

	for(int i=0; i<t; i++){
        cout<<result[i];

        if(i<t-1){
            cout<<endl;
        }
	}

	return 0;
}
