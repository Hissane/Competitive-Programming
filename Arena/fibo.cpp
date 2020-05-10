// Unfinished solution
// Will be updated soon

#include<bits/stdc++.h>

using namespace std;

map<int, int> my_map;

long long fibo(int n){	
	if(my_map[n] == 0){
		if(n == 1 || n == 2){
			my_map[n] = 1;
		}else{
			my_map[n] = fibo(n-1) + fibo(n-2);
		}
	}
	return my_map[n];
}

int main(){
	int q, n;	
	cin >> q;
	for(int i = 0; i < q; i++){
		cin >> n;
		cout << fibo(n) << endl;	
	}
	return 0;
}