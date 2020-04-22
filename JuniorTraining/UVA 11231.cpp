#include<bits/stdc++.h>

using namespace std;

int main(){
	int m, n, c, res;
	while (cin >> n >> m >> c && m != 0){
		if(m == n){
			if(c == 1){
				res = ceil((n-7)/2.0)*ceil((m-7)/2.0);
			}else{
				res = ceil((n-8)/2.0)*ceil((m-8)/2.0);
			}
		}else{
			c = (c + (max(m,n) - min(m,n))%2)%2;
			if(c == 1){
				res = ceil((n-7)/2.0)*ceil((m-7)/2.0);
			}else{
				res = ceil((n-8)/2.0)+ceil((m-8)/2.0);
			}
		}
		cout << res << endl;
	}
	return 0;
}