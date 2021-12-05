#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k, message;
    cin>>n>>k;

    queue<int> q;
    set<int> s;

    for(int i=0; i<n; i++){
        cin>>message;

        if(!s.count(message)){
            if(q.size() == k){
                s.erase(q.front());
                q.pop();
            }

            q.push(message);
            s.insert(message);
        }
    }

    n = q.size();
    int result[n], index=0;
    cout<<n<<endl;

    while (!q.empty()) {
		result[index] = q.front();
		q.pop();
		index++;
	}

    for(int i=n-1; i>=0; i--){
        cout<<result[i]<<" ";
    }

    return 0;
}
