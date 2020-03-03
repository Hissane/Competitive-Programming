#include<bits/stdc++.h>

using namespace std; 

int main(){
	double n, m, a;
	long long res;
	cin >> n >> m >> a;
	res = ceil(m/a)*ceil(n/a);
	cout << res;
	return 0;
}