#include<bits/stdc++.h> 

using namespace std; 

int main(){
	int res;
	string str;

	cin >> str; 

	if(abs(str[0] - 'a') > 13){
		res = 26 - abs(str[0] - 'a');
	}else{
		res = str[0] - 'a';
	}

	for(int i = 1; i < str.length(); i++){
		if(abs(str[i] - str[i-1]) > 13){
			res += 26 - abs(str[i] - str[i-1]);
		}else{
			res += abs(str[i] - str[i-1]);
		}
	}
	cout << res;

	return 0;
}