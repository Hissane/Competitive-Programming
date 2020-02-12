#include<bits/stdc++.h>

using namespace std;

int main(){
	int c, m, x, q, res;
	cin >> q;
	for(int i = 0; i < q; i++){
		cin >> c >> m >> x;
		res = min(c, m) - (x + (max(c, m) - min(c, m)));
		if(res <= 0){
			cout << min(c, m) << endl; 
		}else{
			cout << res << endl;
		}
	}
	return 0;
}