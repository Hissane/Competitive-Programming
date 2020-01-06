#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, groups = 0, cur = 0, prev;
	cin >> n;
	for(int i = 0; i < n; i++){
		prev = cur;
		cin >> cur;
		if(prev != cur){
			groups++;
		}
	}
	cout << groups;
	return 0;
}