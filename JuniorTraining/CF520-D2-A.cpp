#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	map<char, int> map;
	char c;
	cin >> n;
	for(char ch = 'a'; ch <= 'z'; ch++){
		map[ch] = 0;
	}
	for(int i = 0; i < n; i++){
		cin >> c;
		if( c < 'a'){
			c += 'a' - 'A';
		}
		map[c]++;
	}
	for(auto x : map){
		if(x.second < 1){
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	return 0;
}