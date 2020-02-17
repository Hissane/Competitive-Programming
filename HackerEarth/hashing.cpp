#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, q, val;
	string s;
	string arr[1000000005];

	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> val >> s;
		arr[val] = s;
	}
	cin >> q;
	for(int i = 0; i < q; i++){
		cin >> val;
		cout << arr[val] << endl;
	}
	return 0;
}