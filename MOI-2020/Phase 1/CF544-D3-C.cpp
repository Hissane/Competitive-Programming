#include<bits/stdc++.h> 

using namespace std; 

int main(){
	int n, val;
	vector<int> arr;
	
	cin >> n; 
	for(int i = 0; i < n; i++){
		cin >> val;
		arr.push_back(val);
	}
	sort(arr.begin(), arr.end());
	int j = 0, ans = 0;
	for(int i = 0; i < n ; i++){
		while(j < n && (arr[j] - arr[i]) <= 5){
			j++;
			ans = (j - i > ans ? j - i : ans);
		}
	}
	cout << ans; 
	return 0;
}