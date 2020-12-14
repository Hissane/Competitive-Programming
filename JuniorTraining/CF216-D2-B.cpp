#include<bits/stdc++.h> 

using namespace std; 

vector<int> visited; 
map<int, vector<int>> v;
int res = 0;
int cnt[2] = {0,0};
int sum[2] = {0,0};

void dfs(int node){
	int ok = 1;
	int &team  = visited[node];
	sum[team]++;
	for(auto x : v[node]){
		if(visited[x] == -1){
			visited[x] = team ^ 1;
			dfs(x);
		}else if(visited[x] == team){
			visited[x] = -2;
			res++,sum[team]--;
		}
	}
}

int main(){
	int n, m; 
	cin >> n >> m;
	int val1, val2, a, b;
	
	for(int i = 0; i < m; i++){
		cin >> val1 >> val2;
		v[val1].push_back(val2);
		v[val2].push_back(val1);
	}
	visited = vector<int> (n+1, -1);
	for(auto x : v){
		if(visited[x.first] == -1){
			visited[x.first] = 0;
			sum[0] = sum[1] = 0;
			dfs(x.first);
			if(sum[0] < sum[1]){
				swap(sum[0], sum[1]);
			}
			if(cnt[0] < cnt[1]){
				swap(cnt[0], cnt[1]);
			}
			cnt[1] += sum[0];
			cnt[0] += sum[1];
		}
	}
	if(cnt[0] < cnt[1]){
		swap(cnt[0], cnt[1]);
	}
	n -= v.size();
	if(cnt[0] - cnt[1] <= n){
		n -= cnt[0] - cnt[1];
		res += n%2;
	}else{
		cnt[1] += n;
		res += cnt[0] - cnt[1];
	}
	cout << res;
	return 0;
}