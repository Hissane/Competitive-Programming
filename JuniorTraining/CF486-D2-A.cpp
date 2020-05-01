#include<bits/stdc++.h>

using namespace std;

int main(){
	long long n, res;
	cin >> n;
	if(n % 2 == 0){
		res = n / 2;
		cout << res;
	}else{
		res = floor(n / 2) - n;
		cout << res;
	}
	return 0;
}