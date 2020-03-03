#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	int n, res;
	cin >> s;
	n = s.length();
	res = (n % 2 == 0 ? n /2 : (n - 1)/2);
	for(int i = 1; i < n; i++){
		if(s[i] == '1' && n % 2){
			res = res + 1;
			break;
		}
	}
	cout << res;
	return 0; 
}