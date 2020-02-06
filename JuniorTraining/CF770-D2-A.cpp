#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, k, counter = 0, m;
	string s = "abcdefghijklmnopqrstuvwxyz";
	vector<char> v;
	cin >> n >> k;
	s = s.substr(0, k);
	for(int i = 0; i < (n / k); i++){
		cout << s;
	}
	m = n % k;
	s = s.substr(0, m);
	cout << s;
	return 0;
}
