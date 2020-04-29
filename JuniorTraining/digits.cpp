#include<bits/stdc++.h>

using namespace std;

int digits(long long x){
	int res = 0;
	if(x / 10){
		res+= x%10 + digits(x/10);
	}else{
		return x%10;
	}
	return res;
}

int main(){
	int n;
	cin >> n;
	cout << digits(n);
	return 0;
}