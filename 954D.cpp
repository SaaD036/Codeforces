#include <bits/stdc++.h>
using namespace std;

void add_edge(vector<int> adj[], int src, int dest)
{
	adj[src].push_back(dest);
	adj[dest].push_back(src);
}

bool BFS(vector<int> adj[], int src, int dest, int v, int pred[], int dist[])
{
	list<int> queue;
	bool visited[v];

	for (int i = 0; i < v; i++) {
		visited[i] = false;
		dist[i] = INT_MAX;
		pred[i] = -1;
	}

	visited[src] = true;
	dist[src] = 0;
	queue.push_back(src);

	while (!queue.empty()) {
		int u = queue.front();
		queue.pop_front();
		for (int i = 0; i < adj[u].size(); i++) {
			if (visited[adj[u][i]] == false) {
				visited[adj[u][i]] = true;
				dist[adj[u][i]] = dist[u] + 1;
				pred[adj[u][i]] = u;
				queue.push_back(adj[u][i]);

				if (adj[u][i] == dest)
					return true;
			}
		}
	}

	return false;
}

int getDistance(vector<int> adj[], int s, int dest, int v){
	int pred[v], dist[v];

	if (BFS(adj, s, dest, v, pred, dist) == false) {
		return -1;
	}

	return dist[dest];
}

int main(){
    int n, m, s, t, result = 0;;
    cin>>n>>m>>s>>t;
    int ss[n], tt[n], mat[n][n];
    vector<int> adj[n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            mat[i][j] = 0;
        }
    }

    for(int i=1; i<=m; i++){
        int src, dst;
        cin>>src>>dst;

        add_edge(adj, src-1, dst-1);
        mat[src-1][dst-1] = 1;
        mat[dst-1][src-1] = 1;
    }

    for(int i=0; i<n; i++){
        if(s-1 == i){
            ss[i] = 0;
        }
        else{
            ss[i] = getDistance(adj, s-1, i, n);
        }

        ///cout<<ss[i]<<"  ";

        if(t-1 == i){
            tt[i] = 0;
        }
        else{
            tt[i] = getDistance(adj, t-1, i, n);
        }
    }

    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(mat[i][j] == 0){
                if(ss[i]+tt[j]+1>=ss[t-1] && ss[j]+tt[i]+1>=ss[t-1]){
                    result++;
                }
            }
        }
    }

    cout<<result;

    return 0;
}
