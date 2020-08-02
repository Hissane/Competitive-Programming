#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, k, x;
	int ans = 0;
	int arr[103]; 
	cin >> n >> k >> x;
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	for(int i = 0; i < n; i++){
		if(arr[i] == x && arr[i+1] == x){
			int res = 2;
			int r = 2 + i, l = i-1;
			while (r < n && l >= 0 && arr[r] == arr[l]){
				int xx = 0;
				while(arr[r+1] == arr[r] && r + 1 < n){
					r++;
					xx++;
				} 
				while(arr[l] == arr[l-1] && l-1 >= 0){
					l--;
					xx++;
				}
				r++; 
				l--;
				if(!xx)break;
				res+= xx + 2;
			}
			ans = max(ans, res);
		}
	}
	cout << ans;
	return 0;
}