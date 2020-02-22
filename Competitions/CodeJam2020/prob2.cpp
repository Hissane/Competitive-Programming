#include<bits/stdc++.h>

using namespace std;

int main(){
	int T, n, val;
	char c;
	char arr[10005];
	cin >> T;
	for(int i = 0; i < T; i++){
		cin >> n;
		c = 'L';
		for(int j = 0; j < n; j++){
			cin >> val;
			arr[val] = c;
			if(c == 'L'){
				c = 'R';
			}else{
				c = 'L';
			}
		}
		cout << "Case #"<< i+1<< ": ";
		for(int j = 1; j <= n; j++){
			cout << arr[j];
		}
		cout << endl;
	}
}