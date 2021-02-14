#include<bits/stdc++.h> 

using namespace std; 

void topo(int node, vector<int> &visited, map<int, vector<int>> &map, vector<int> &q){
	visited[node] = 1;
	for(auto x : map[node]){
		if(!visited[x]){
			topo(x, visited, map, q);
		}
	}
	q.push_back(node);
}

int main(){
	int n, m, val1, val2; 
	while(cin >> n >> m && n){
		map<int, vector<int>> map;
		vector<int> visited(n+1, 0);
		vector<int> q;
		for(int i = 0; i < m; i++){
			cin >> val1 >> val2;
			map[val1].push_back(val2);
		}
		for(int i = 1; i <= n; i++){
			if(!visited[i]){
				topo(i, visited, map, q);
			}
		}
		for(int i = q.size()-1; i >= 0; i--){
			cout << q[i];
			if(i) cout << " ";
		}
		cout << endl;
	}
	return 0;
}