#include <bits/stdc++.h>

using namespace std; 

int main(){
	int n, max = 0;
	string s;
	string res;
	map<string, int> map;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> s;
		map[s]++;
	}
	for(auto x : map){
		if(x.second > max){
			res = x.first;
			max = x.second;
		}
	}
	cout << res;
	return 0;
}