#include<bits/stdc++.h> 

using namespace std;

int arr[1005][1005] = {0};

int dp(int i, int j){
	if(i == 1 || j == 1){
		arr[i][j] = 1;
		return 1;
	}
	if(arr[i][j] == 0){
		arr[i][j] = (dp(i-1,j)% 1000000007 + dp(i, j-1)% 1000000007)% 1000000007;
	} 
	return arr[i][j];
}

int main(){
	int q;
	int m, n;
	cin >> q;
	for(int k = 0; k < q; k++){
		cin >> m >> n;
		int res = dp(m,n);
		cout << res << endl;
	}
	return 0;
}