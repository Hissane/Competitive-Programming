#include<bits/stdc++.h>

using namespace std;

vector<int> visited;

void dfs(int x, vector<vector<int>> &g){
	for(auto u : g[x]){
		if(!visited[u]){
			visited[u] = 1;
			dfs(u, g);
		}
	}
}
int main(){
	int n, m, val1, val2, res = 0;

	cin >> n >> m;

	vector<vector<int>> v(n);
	
	stack<int> s;

	for(int i = 0; i < m; i++){
		cin >> val1 >> val2;
		v[val1].push_back(val2);
		v[val2].push_back(val1);
	}

	for(int i = 0; i < n; i++){
		if(!visited[i]){
			visited[i] = 1;
			dfs(i, v);
			res++;
		}
	}
	cout << res - 1;
	return 0;
}