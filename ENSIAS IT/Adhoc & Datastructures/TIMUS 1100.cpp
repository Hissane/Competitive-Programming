#include<bits/stdc++.h> 

using namespace std;

int main(){
	int n, key, value;
	map<int, vector<int>, greater<int>> map;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> value >> key;
		map[key].push_back(value);
	}
	for(auto x : map){
		for(auto y : map[x.first]){
			cout << y <<" "<< x.first<< endl;
		}
	}
	return 0; 
}