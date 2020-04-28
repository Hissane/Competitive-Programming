#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	int res = 0;
	cin >> s;
	for(int i = 0; i < s.length(); i++){
		s[i] == '1' ? res++ : res--;
	}
	cout << abs(res);
	return 0;
}