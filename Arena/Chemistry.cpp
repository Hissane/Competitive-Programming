#include<bits/stdc++.h> 

using namespace std;

bool check(int val, int budget, int nbr, int x[], int q[], int c[]){
	for(int k = 0; k < nbr; k++){
		budget -= (x[k]-q[k])*c[k]*val;
	}
	if(budget < 0){
		return false;
	}else{
		return true;
	}
}

int main(){
	long long t, X, n, left, right, mid;
	int x[100005], c[100005], q[100005];
	cin >> t;
	for(int j = 0; j < t; j++){
		cin >> X >> n;
		for(int i = 0; i < n; i++){
			cin >> x[i] >> q[i] >> c[i];
		}
		left = 0;
		right = 1005;
		while(left < right){
			mid = (left+right)/2;
			if(check(mid, X, n, x, q, c)){
				left = mid;
			}else{
				right = mid;
			}
		}
		cout << left << endl;
	}
	return 0;
}