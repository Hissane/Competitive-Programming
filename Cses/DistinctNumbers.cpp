#include<bits/stdc++.h>

using namespace std; 

int main(){
	long long n, count = 0;
	long long m;
	long arr[1000000005] = {0};
	cin >> n;
	for(int i = 0; i <= n; i++){
		cin >> m;
		arr[m]++;
	}
	for(int i = 0; i <= n; i++){
		if(arr[i] != 0){
			count++;
		}
	}
	cout << count;
	return 0;
}