// Unfinished solution
// Will be updated soon

#include<bits/stdc++.h>

using namespace std;

int arr[1000006] = {0};

long long fibo(int a){	
	if(a == 0){
		return 0;
	}else if(a == 1){
		return 1;
	}
	if(arr[a] == 0){
		arr[a] = (fibo(a - 1)% 1000000007  + fibo(a - 2)% 1000000007)% 1000000007;
	}
	return arr[a];
}

int main(){
	int q, n;	
	cin >> q;
	for(int i = 0; i < q; i++){
		cin >> n;
		cout << fibo(n) << endl;	
	}
	return 0;
}