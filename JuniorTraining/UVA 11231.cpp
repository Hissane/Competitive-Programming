#include<bits/stdc++.h>

using namespace std;

int main(){
	int m, n, c, res;
	while (cin >> n >> m >> c && m != 0){
		res = ((n-7)*(m-7) + c)/2;
		cout << res << endl;
	}
	return 0;
}