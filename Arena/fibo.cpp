#include<bits/stdc++.h>

using namespace std;

map<int, int> map;

int fibo(int n){
	
	if(map[n] == 0){
		if(n == 1 || n == 0){
			map[n] = 1;
		}else{
			map[n] = fibo(n-1) + fibo(n-2);
		}
	}
	return map[n];
}

int main(){
	int q, n;
	
	cin >> n;
	for(int i = 0; i < q; i++){
		cin >> q;
		cout << fibo(n) << endl;	
	}
	return 0;
}