#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, count = 0, res = 0, val;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> val;
		count += val;
		if(count < 0){
			res++;
			count = 0;
		}
	}
	cout << res;
	return 0;
}