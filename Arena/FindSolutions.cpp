#include<bits/stdc++.h>

using namespace std;
long long poww(long long a, long long b){
	long long res = 1;
	for(int i = 0; i < b; i++){
		res *= a;
	}
	return res;
}
int digits(long long x){
	int res = 0;
	if(x / 10){
		res+= x % 10 + digits(x/10);
	}else{
		return x % 10;
	}
	return res;
}
int main(){
	long long a, b, c;
	int count = 0;
	cin >> a >> b >> c;
	for(int i = 1; i <= 90; i++){
		long long x = a*poww(i, b) + c;
		if(digits(x) == i && x <= 1000000000){
			count++;
		}
	}
	cout << count;
	return 0;
}