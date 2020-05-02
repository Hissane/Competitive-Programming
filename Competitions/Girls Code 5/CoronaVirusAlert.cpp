#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	char c;
	cin >> s;
	for(int i = 0; i < s.length(); i++){
		if(s[i] == 'c'){
			cout << "Stay Home";
			return 0;
		}
	}
	cout << "Safe";
	return 0;
}