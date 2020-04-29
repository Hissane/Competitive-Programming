#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, val, count = 0;
	std::map<int, int> map;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> val;
		map[val]++;
	}
	for(auto x : map){
		if(x.first != map.begin()->first && x.first != map.rbegin()->first){
			count += x.second; 
		}
	}
	cout << count;
	return 0;
}