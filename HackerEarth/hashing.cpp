#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, q, val;
	string s;
	map<int, string> map;

	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> val >> s;
		map[val] = s;
	}
	cin >> q;
	for(int i = 0; i < q; i++){
		cin >> val;
		cout << map[val] << endl;
	}
	return 0;
}