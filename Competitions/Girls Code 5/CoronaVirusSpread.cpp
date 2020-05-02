#include<bits/stdc++.h>

using namespace std;

int main(){
	string s, str;
	char c;
	int t;
	cin >> t;
	for(int j = 0; j < t; j++){
		int flag = 0, res = 0, p;
		cin >> s;
		for(int i = 0; i < s.length(); i++){
			if(s[i] == 'c' && flag == 0){
				res = i;
				p = i;
				flag = 1;
				str = s.substr(i, s.length()); 
			}else if(s[i] == 'c'){
				if(i - p > res){
					res = i - p - 1;
				}
				p = i;
				flag++; 
				str = s.substr(i, s.length());
			}
		}
		cout << res << " ";
		if(res == 0){
			cout << s << endl;
		}else{
			for(int i = 1; i < flag ; i++){
				cout << 'c';
			}
			cout << str << endl;
		}
		
	} 
	return 0;
}