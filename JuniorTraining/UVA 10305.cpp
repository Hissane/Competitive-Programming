#include<bits/stdc++.h> 

using namespace std;



void topo(int node, vector<int> &vect, map<int, vector<int>> &v, vector<int> q){
	vect[node] = 1;
	for(auto x : v[node]){
		if(!vect[x]){
			topo(x, vect, v, q);
		}
	}
	q.push_back(node);
}

int main(){
	int n, m;
	while(cin >> n >> m && n && m){
		int s, val;
		vector<int> visited(n+1, 0); 
		vector<int> q;
		map<int, vector<int>> v;
		for(int i = 1; i <= m; i++){
			cin >> val >> s;
			v[val].push_back(s);
		}
		for(int i = 1; i <= n; i++){
			if(!visited[i]){
				topo(i, visited, v, q);
			}
		}
		
		for(int i = q.size()-1; i >= 0; i--){
			cout << q[i] << " ";
		}
		cout << endl;
	}
	return 0; 
}