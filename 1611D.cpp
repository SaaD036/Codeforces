#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        int n, root;
        cin>>n;
        int tree[n], p[n], dist[n], weight[n];
        bool flag = true;

        for(int j=0; j<n; j++){
            cin>>tree[j];
            tree[j]--;
            dist[j] = -1;
            weight[j] = 0;

            if(tree[j] == j){
                root = tree[j];
            }
        }
        for(int j=0; j<n; j++){
            cin>>p[j];
            p[j]--;
        }

        if(p[0] != root){
            cout<<"-1"<<endl;
            continue;
        }

        dist[root] = 0;
        int current = 0;

        for(int j=1; j<n; j++){
            int node = p[j];

            if(dist[tree[node]] == -1){
                cout<<"-1"<<endl;
                flag = false;
                break;
            }

            weight[tree[node]]++;

            current = max(current+1, weight[tree[node]]);
            dist[p[j]] = current;
        }

        if(flag){
            for(int j=0; j<n; j++){
                cout<<dist[j]-dist[tree[j]]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}
