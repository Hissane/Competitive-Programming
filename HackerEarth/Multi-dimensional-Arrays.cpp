#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, m;
	int arr[15][15];
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> arr[j][i];
		}
	}
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}