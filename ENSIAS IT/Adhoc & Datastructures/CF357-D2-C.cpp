#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, m, x, l, r;
	int arr[300005] = {0};
	cin >> n >> m;
	for(int j = 0; j < m; j++){
		cin >> r >> l >> x;
		for(int i = r; i <= l; i++){
			if(arr[i] == 0 && i != x){
				arr[i] = x;
			}
		}
		//for(int i = 1; i <= n; i++){
			//cout << arr[i] << " ";
		//}
		//cout << endl;
	}
	for(int i = 1; i <= n; i++){
		cout << arr[i] << " ";
	}
	return 0;
}