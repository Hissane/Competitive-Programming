#include<bits/stdc++.h>
#pragma GCC optimize ("O2")

using namespace std;
const int NMAX=100005;

int main(){

	int n, p1, p2;
	int arr[NMAX];
	int ans[NMAX] = {0};
	set <pair<int, int>> set;

	//cin >> n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		//cin >> arr[i];
		scanf("%d", &arr[i]);
		set.insert({arr[i], i});
	}

	for(int i = n-1; i > 0; i--){
		set.erase({arr[i], i});
		for(auto x = set.upper_bound({arr[i], i}); x != set.end();){
			ans[x->second] = i - x->second;
			x = set.erase(x);
		}
	}

	for(int i = 0; i < n; i++){
		//cout << ans[i] - 1 << " ";
		printf("%d ", ans[i]-1);
	}


	return 0;
}