#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, val, p, q;
	map<int, int> map;
	cin >> n;
	cin >> p;
	for(int i = 0; i < p; i++){
		cin >> val;
		map[val]++;
	}
	cin >> q;
	for(int i = 0; i < q; i++){
		cin >> val;
		map[val]++;
	}
	for(int i = 1; i <= n; i++){
		if(map[i] == 0){
			cout << "Oh, my keyboard!";
			return 0;
		}
	}
	cout << "I become the guy.";
	return 0;
}