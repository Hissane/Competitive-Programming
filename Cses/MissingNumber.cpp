#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, m;
	int arr[200005] = {0};
	cin >> n;
	for(int i = 1; i < n; i++){
		cin >> m;
		arr[m] = 1;
	}
	for(int i = 1; i < n+1; i++){
		if(arr[i] == 0){
			cout << i << " ";
		}
	}
	return 0;
}