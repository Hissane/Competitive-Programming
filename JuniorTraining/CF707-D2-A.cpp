#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m;
	char val;
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> val;
			if(val == 'C' || val == 'Y' || val == 'M'){
				cout << "#Color";
				return 0;
			}
		}
	}
	cout << "#Black&White";
	return 0;
}