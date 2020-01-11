#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	int n, k, res; 
	cin >> t;
	for(int i = 0; i < t; i++){
		cin >> n >> k;
		if ((n % k) == 0){
			res = n;
		}else{
			if((n % k) < (k / 2)){
				res = n;
			}else{
				res = n - ( (n % k) - (k / 2));
			}
		}
		cout << res <<endl;
	}

	return 0;
}