#include<bits/stdc++.h>

using namespace std;

int main(){
	long n, res = 1; 
	long m = 10e9 + 7, x;
	cin >> n; 
	x = 2;
	while(n > 0){
		if(n % 2 != 0){
			res = (res * x) % m;
		}
		n = n >> 1; 
		x = (x*2) % m;
	}
	cout << res;
	return 0;
}