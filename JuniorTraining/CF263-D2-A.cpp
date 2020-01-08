#include <bits/stdc++.h>

using namespace std;

int main(){
	int i, j;
	int val, res;
	for(int i = 1; i < 6; i++){
		for(int j = 1; j < 6; j++){
			cin >> val;
			if(val == 1){
				res = abs(3 - i) + abs(3 - j);
			}
		}
	}
	cout << res;
	return 0;
}