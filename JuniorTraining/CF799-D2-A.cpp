#include<bits/stdc++.h> 

using namespace std; 

int main(){
	double n, t, k, d, org, dbl;

	cin >> n >> t >> k >> d;
	
	if(n <= k){
		cout << "NO";
	}else{
		if((ceil(n/k)*t - d) > t){
			cout << "YES";
		}else{
			cout << "NO";
		}
	}

	return 0;
}