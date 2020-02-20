#include<bits/stdc++.h>

using namespace std; 

int main(){
	int n, val;
	int arr[100005];
	int max[100005];
	int min[100005];
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> arr[i];
	}
	min[1] = arr[2] - arr[1];
	min[n] = arr[n] - arr[n-1];
	max[1] = arr[n] - arr[1];
	max[n] = arr[n] - arr[1];
	for(int i = 2; i < n; i++){
		min[i] = ((arr[i] - arr[i-1]) > (arr[i+1] - arr[i]) ? arr[i+1] - arr[i] : arr[i] - arr[i-1]);
		max[i] = ((arr[i] - arr[1]) > (arr[n] - arr[i]) ? arr[i] - arr[1] : arr[n] - arr[i]);
	}
	for(int i = 1; i <= n; i++){
		cout << min [i] << " " << max[i] << endl;
	}
	return 0;
}