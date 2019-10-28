#include<bits/stdc++.h>

using namespace std; 



int main(){
	int n, counter = 0; 
	long val; 
	map<long, int> occ;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> val; 
		if(occ[val] == 0){
			counter++;
		}
		occ[val]++;
	}
	cout << counter;
	return 0;
}