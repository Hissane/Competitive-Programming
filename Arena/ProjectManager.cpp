#include<bits/stdc++.h>

using namespace std;

vector<int> visited;
vector<int> weight;
int res;

int dfs(int x, vector<vector<int>> &g){
	int max = 0, max_son = 0, son = 0;
	for(int u : g[x]){
		if(!visited[u]){
			visited[u] = 1;
			son = dfs(u, g);
			if(son > max_son){
				max_son = son;
			}
		}
	}
	return weight[x] + max_son;
}

int main(){
	int n, m, t;
	int val2, val1, val;
	cin >> t;
	for(int i = 0; i < t; i++){
		res = 0;
		cin >> n >> m;

		visited.clear();
		weight.clear();
		visited.resize(n);
		weight.resize(n+1);

		vector<vector<int>> v(n);
		for(int j = 0; j < n; j++){
			cin >> val1 >> val2;
			v[val1].push_back(val2);
		}
		weight.push_back(0);
		for(int j = 1; j <= n; j++){
			cin >> val;
			weight[j] = val;
		}

		for(int j = 0; j < n; j++){
			if(!visited[j]){
				visited[j] = 1;
				if(res < dfs(j, v)){
					res = dfs(j, v);
				}	
			}
		}
		cout << res << endl;
	}
	return 0;
}