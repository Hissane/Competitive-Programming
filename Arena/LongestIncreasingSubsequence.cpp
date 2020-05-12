#include<bits/stdc++.h>

using namespace std;

int lis[1005] = {0};

int dp(int i, int arr[]){
	int max = 0;
	if(i == 0){
		lis[i] = 1;
		return 1;
	}
	if(lis[i] == 0){
		for(int j = 0; j < i; j++){
			if(dp(j, arr) > max && arr[j] < arr[i]){
				max = dp(j, arr);
			}
		}
		lis[i] = max + 1;
	}
	return lis[i]; 
}

int main(){
	int n, res = 0;
	int arr[1005];
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	for(int k = 0; k < n; k++){
		if(dp(k, arr) > res){
			res = dp(k, arr);
		}
	}
	cout << res;
	return 0;
}