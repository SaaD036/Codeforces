#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, k;
    cin>>n>>m>>k;
    vector<pair<int, int>> a(n);
    int ind[m*k], division[k-1];;
    long long int sumBeauty = 0;

    for(int i=0; i<n; ++i) {
        cin>>a[i].first;
        a[i].second = i;
    }

    sort(a.begin(), a.end(), greater<pair<int, int>>());

    for(int i = 0; i < m*k; ++i) {
        sumBeauty += a[i].first;
        ind[i] = a[i].second;
    }

    sort(ind, ind+m*k);

    for(int i=0; i<k-1; i++){
        division[i] = ind[(i+1)*m-1]+1;
    }

    cout << sumBeauty << endl;
    for(int i=0; i<k-1; i++){
        cout<<division[i]<<" ";
    }

    return 0;
}
