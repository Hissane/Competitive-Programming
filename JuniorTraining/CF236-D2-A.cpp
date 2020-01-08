#include<bits/stdc++.h> 

using namespace std;

int main(){
	string username;
	int n, count = 0;
	map<char, int> map;
	cin >> username;
	n = username.length(); 
	for(int i = 0; i < n; i++){
		if(map[username[i]] > 0){
			
		}else{
			count++;
		}
		map[username[i]]++;
	}
	if(count % 2 == 0){
		cout << "CHAT WITH HER!" << endl;
	}else{
		cout << "IGNORE HIM!" << endl;
	}
	return 0;
}