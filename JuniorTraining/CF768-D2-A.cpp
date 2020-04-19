#include<bits/stdc++.h>

using namespace std;

int main(){
	int val, n, res = 0;
	map<int, int> map;
	//map<int, int>::iterator it;
	cin >> n; 
	for(int i = 0; i < n; i++){
		cin >> val;
		map[val]++;
	}
	for(auto it = next(map.begin()); it != prev(map.end()); it++){
		res += it->second;
		//cout << it->first << " ";
	}
	cout << res;
	return 0;
}