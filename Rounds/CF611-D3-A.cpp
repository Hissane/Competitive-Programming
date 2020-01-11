#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	int h, m, res;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> h >> m;
		res = 1440 - ( h*60 + m );
		cout << res << endl;
	}

	return 0;
}