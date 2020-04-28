#include<bits/stdc++.h>

using namespace std;

int main(){
	int t, n;
	cin >> t;
	for(int i = 0; i < n; i++){
		cin >> n;
		int j = 2;
		while(x*(j - 1) < n){
			if(x == n){
				cout << n / (i -1);
				break;
			}
			i = i*2;
		}
	}
	return 0;
}
