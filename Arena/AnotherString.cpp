#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	string s;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> s;
		s += s[0];
		s.erase(s.begin());
		cout << s << endl;
	}
	return 0;
}