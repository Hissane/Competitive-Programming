#include<bits/stdc++.h> 

using namespace std;

int n;
int arr[1000005];

int main(){
	int sum = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}

	for(int i = 0; i < n; i++){
		for(int j = i; j < n; j++){
			if (arr[i] > arr[j]){
				sum += 1;
			}
		}
	}

	cout << sum;

	return 0;
}