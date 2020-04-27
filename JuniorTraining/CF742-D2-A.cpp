#include<bits/stdc++.h>

using namespace std;

int main(){
	long long n, res = 1;
	cin >> n;
	for(int i = 0; i < n; i++){
		res = res * 8;
		res = res % 10;
	}
	cout << res;
	return 0;
}
