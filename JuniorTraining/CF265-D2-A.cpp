#include<bits/stdc++.h> 

using namespace std;

int main(){
	int res = 1, i = 0;
	string s, t;
	cin >> s >> t;
	for(int j = 0; j < t.length(); j++){
		if( s[i] == t[j]){
			res++;
			i++; 
		}
	}
	cout << res;
	return 0;
}