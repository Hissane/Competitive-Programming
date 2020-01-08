#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, h, res = 0, a;
	cin >> n >> h;
	for(int i = 0; i < n; i++){
		cin >> a;
		if(a > h){
			res += 2;
		}else{
			res += 1;
		}
	}
	cout << res;
	return 0;
}