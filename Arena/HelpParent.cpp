#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, pos;
	string s;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> pos >> s;
		s.erase(s.begin()+pos-1);
		cout << i + 1 << " " << s << endl;
	}
	return 0;
}