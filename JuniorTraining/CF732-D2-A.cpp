#include<bits/stdc++.h> 

using namespace std;

int main(){
	int k, k0, r, res = 1;
	cin >> k >> r;
	k0 = k;
	while(1){
		if( ((k % 10) == 0) || ((k-r) % 10) == 0 ){
			cout << res;
			break;
		}else{
			res++;
			k += k0;
		}
	}
	return 0;
}