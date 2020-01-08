#include<bits/stdc++.h>

using namespace std;

int main(){

	int n;
	int x;
	int arr[105];
	int temp;

	cin >> n >> x;
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	for(int i = 0; i < x; i++){
		temp = i;
		for(int j = i+1; j < n; j++){
			if(arr[j] < arr[temp]){
				temp = j;
			}
		}
		swap(arr[i], arr[temp]);
	}
	for(int i = 0; i < n; i++){
		cout << arr[i] <<" ";
	}

	return 0;
}