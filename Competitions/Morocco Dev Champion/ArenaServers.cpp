#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	long double t, n, c, srv;
	long res;
	cin >> t;
	for(int i = 0; i < t; i++){
		cin >> n >> c;
		res = 0;
		for(int j = 0; j < n; j++){
			cin >> srv;
			res += ceil(srv / c);
	
		}
		cout << res << "\n";
	}
	return 0;
}