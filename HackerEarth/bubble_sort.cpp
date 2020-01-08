#include<bits/stdc++.h>

using namespace std; 

int main(){
	int n; 
	int temp;
	int swaps = 0;
	int arr[105];
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	for(int i = 0; i < n-1; i++){
		for(int j = 0; j < n-i-1; j++){
			if(arr[j] > arr[j+1]){
				swaps++;
				swap(arr[j],arr[j+1]);
			}
		}
	}
	cout << swaps;
	return 0;
}