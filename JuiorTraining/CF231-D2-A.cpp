#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, probs = 0;
	int p, v, t, sum;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> p >> v >> t;
		sum = p + v + t;
		if(sum > 1){
			probs++;
		}
	} 
	cout << probs;
	return 0; 
} 