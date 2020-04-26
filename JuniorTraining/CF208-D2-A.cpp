#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	int n = s.length();
	s = s + "WUB";
	for(int i = 0; i < n; i++){
		if( s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
			i = i + 2;
		}else if(s[i+1] == 'W' && s[i+2] == 'U' && s[i+3] == 'B'){
			cout << s[i];
			cout << " ";
			//i = i + 3;
		}else{
			cout << s[i];
		}
	}
	return 0;
}