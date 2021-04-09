#include<bits/stdc++.h> 

using namespace std; 

int main(){
	int n; 
	int a, b, prev = 4200, unrated = 0; 
	cin >> n; 
	for(int i = 0; i < n; i++){
		cin >> a >> b; 
		if(a != b){
			cout << "rated";
			return 0;
		}
		if(a > prev){
			unrated = 1; 
		}
		prev = a;
	}
	if(unrated){
		cout << "unrated";
	}else {
		cout << "maybe";
	}
	return 0; 
}