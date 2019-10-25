#include<bits/stdc++.h>

using namespace std;

int main(){
	long n, counter = 0;
	long arr[200005];
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> arr[i];	
	}
	for(int i = 0; i < n-1; i++){
		if(arr[i] > arr[i+1]){
			counter += arr[i] - arr[i+1];
			arr[i+1] += arr[i] - arr[i+1];
		}		
	}
	cout << counter;

	return 0;
}