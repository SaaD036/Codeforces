#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<pair <unsigned long long int, int>> sc;
    int n, k;
    unsigned long long int tmp, result=0;
    cin>>n>>k;
    set<int> rsc;
    int print[n];

    for(int i=0; i<n; i++){
        cin>>tmp;

        sc.push_back(make_pair(tmp, i));
        rsc.insert(i+k);
    }

    sort(sc.begin(), sc.end());

    for(int i=n-1; i>=0; i--){
        if(rsc.count(sc[i].second)){
            rsc.erase(sc[i].second);
            print[sc[i].second] = sc[i].second;
        }
        else{
            result += abs(sc[i].second - *rsc.begin()) * sc[i].first;
            print[sc[i].second] = *rsc.begin();
            rsc.erase(*rsc.begin());
        }
    }

    cout<<result<<endl;
    for(int i=0; i<n; i++){
        cout<<print[i]+1<<" ";
    }

    return 0;
}
