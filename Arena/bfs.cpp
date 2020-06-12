#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, m, val1, val2;

	cin >> n >> m;

	vector<vector<int>> v(n);
	vector<int> visited(n,0);
	queue<pair<int,int>> q;

	for(int i = 0; i < m; i++){
		cin >> val1 >> val2;
		v[val1].push_back(val2);
		v[val2].push_back(val1);
	}

	q.push(0,0);
	visited[0] = 1;
	int lvl = 0;
	while(!q.empty()){
		auto x = q.front();
		q.pop();
		
		for(auto u : v[x.first]){
			if(!visited[u])
				visited[u] = 1, q.push(u, x.second + 1);
		}
		if(lvl != x.second){
			cout << endl;
		}
		lvl = x.second;
		cout << x.first << " ";
	}

	return 0;
}