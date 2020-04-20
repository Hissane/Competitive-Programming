#include<bits/stdc++.h>

using namespace std;

int main(){
	string v = "qwertyuiopasdfghjkl;zxcvbnm,./", s;
	char c;
	cin >> c >> s;
	for(int i = 0; i < s.length(); i++){
		for(int j = 0; j < v.length(); j++){
			if(s[i] == v[j]){
				if(c == 'R'){
					cout << v[j-1];
				}else{
					cout << v[j+1];
				}
			}
		}
	}
	return 0;
}