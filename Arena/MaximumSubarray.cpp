#include<bits/stdc++.h>

using namespace std;

int maxat[1000006] = {0};

long dp(int a, long arr[]){
	if(a == 0){
		maxat[a] = arr[a];
		return arr[a];
	}
	if(maxat[a] == 0){
		maxat[a] = max(dp(a-1, arr) + arr[a], arr[a]);
	}
	return maxat[a];
}

int main(){
	long n, res = -100005;
	long arr[1000006];
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	cout << endl;
	for(int i = 0; i < n; i++){
		res = max(dp(i, arr), res);
	}
	cout << res;
	return 0;
}