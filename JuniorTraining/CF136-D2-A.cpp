#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, val;
	int arr[105];
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> val;
		arr[val] = i+1;
	}
	for(int i = 1; i <= n; i++){
		cout << arr[i] << " ";
	}
	return 0;
}