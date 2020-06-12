#include<bits/stdc++.h>

using namespace std;

vector<int> visited;
vector<int> weight;
int res;

void dfs(int x, vector<vector<int>> &g){
	int max = 0;
	for(int u : g[x]){
		if(!visited[u]){
			visited[u] = 1;
			dfs(u, g);
			if(weight[u-1] > max){
				max = weight[u-1];
			}
		}
	}
	res += weight[x-1] + max;
	//topo.push_back(x);
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
		weight.resize(n);

		vector<vector<int>> v(n);
		for(int j = 0; j < n; j++){
			cin >> val1 >> val2;
			v[val1].push_back(val2);
		}
		for(int j = 0; j < n; j++){
			cin >> val;
			weight.push_back(val);
		}

		for(int j = 0; j < n; j++){
			if(!visited[j]){
				visited[j] = 1;
				dfs(j, v);
				
			}
		}
	}
	return 0;
}