#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int t, n;
	int resx, resy, resz;
	long long x[100005], y[100005], z[100005];
	cin >> t;
	for(int j = 0; j < t; j++){
		cin >> n;
		resx = 1; resy = 1; resz = 1;

		for(int i = 0; i < n; i++){
			cin >> x[i] >> y[i] >> z[i];
		}
	
		for(int i = 0; i < n; i++){
			if(x[i] != x[0]){
				resx = 0;
			}
			if(y[i] != y[0]){
				resy = 0;
			}
			if(z[i] != z[0]){
				resz = 0;
			}
		}
		if((resx + resy + resz) < 1){
			cout << "NO\n";
		}else{
			cout << "YES\n";
		}

	}
	return 0;
}