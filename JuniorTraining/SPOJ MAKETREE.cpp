#include<bits/stdc++.h> 

using namespace std;

vector<int> q;

map<int, vector<int>> v;

void topo(int node, vector<int> &vect){
	vect[node] = 1;
	for(auto x : v[node]){
		if(!vect[x]){
			topo(x, vect);
		}
	}
	q.push_back(node);
}

int main(){
	int n, m;
	cin >> n >> m;
	int s, val;
	vector<int> visited(n+1, 0); 
	map<int, int> res;
	for(int i = 1; i <= m; i++){
		cin >> val;
		for(int j = 0; j < val; j++){
			cin >> s;
			v[i].push_back(s);
		}
	}
	for(int i = 1; i <= n; i++){
		if(!visited[i]){
			topo(i, visited);
		}
	}
	q.push_back(0);
	for(int i = 0; i < n; i++){
		res[q[i]] = q[i+1];
	}
	for(auto x : res){
		cout << x.second << endl;
	}
	return 0; 
}