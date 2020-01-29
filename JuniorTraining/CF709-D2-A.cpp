#include<bits/stdc++.h>

using namespace std; 

int main(){
	int n, b, d;
	int sum = 0, res = 0;
	int arr[100005];

	cin >> n >> b >> d;
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	for(int i = 0; i < n; i++){
		if( arr[i] <= b){
			sum += arr[i];
			if(sum > d){
				sum = 0;
				res++;
			}
		}
	} 
	cout << res;

	return 0;
}