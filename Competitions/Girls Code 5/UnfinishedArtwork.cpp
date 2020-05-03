// this solution is wrong, it should be a union find
// will be updating this solution soon


#include<bits/stdc++.h> 

using namespace std;

int main(){
	int n, m;
	int val1, val2, res;
	map<int, int> map;
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		cin >> val1 >> val2;
		map[val1]++;
		map[val2]++;
	}
	res = n - (map.size() ? map.size() : 1);
	cout << res;
	return 0;
}