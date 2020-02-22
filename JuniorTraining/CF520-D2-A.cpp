#include<bits/stdc++.h>

using namespace std;

int main(){
	string s; 
	int n; 
	map<char, int> map;
	cin >> n >> s;
	for(char c = 'a'; c < 'z'; c++){
		map[c] = 1;
	}
	for(int i = 0; i < n; i++){
		if(s[i] < 'a'){
			s[i] += 'a'-'A';
		}
		map[s[i]]++;
	}
	cout << s << endl;
	for(auto x : map){
		cout << x.first;
		if(x.second == 1){
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	return 0;
}