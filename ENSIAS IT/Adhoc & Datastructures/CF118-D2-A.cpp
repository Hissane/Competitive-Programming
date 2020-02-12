#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	for(int i = 0; i < s.length(); i++){ 
		if(s[i] != 'a' && s[i] != 'e' && s[i] != 'u' && s[i] != 'i' && s[i] != 'o' && s[i] != 'y' && s[i] != 'A' && s[i] != 'E' && s[i] != 'U' && s[i] != 'I' && s[i] != 'O'  && s[i] != 'Y'){
			if(s[i] > 65 && s[i] < 91){
				s[i] = s[i] + 32;
			}
			cout << "." << s[i];
		}
	}
	return 0;
}