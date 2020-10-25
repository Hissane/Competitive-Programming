#include <bits/stdc++.h>

using namespace std;

int main(){
	int len = 0;
	string n,e,s;
	char prev;
	cin >> n >> e >> s;
	prev = s[1];
	for(int i = 0; i < s.length(); i++){
		if(s[i] != ',' && s[i] != ']' && s[i] != '['){
			if(prev == s[i] && i != 1){
				s[i] = ',';
			}else{
				len++;
				prev = s[i];
			}
		}
	}
	cout << len << ", nums = [" << s[1];
	for(int i = 2; i < s.length(); i++){
		if(s[i] != ',' && s[i] != ']' && s[i] != '['){
			cout << "," << s[i];
		}
	}
	cout << "]";
	return 0; 
} 