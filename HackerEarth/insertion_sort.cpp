#include<bits/stdc++.h>

using namespace std;

int n;
int temp;
int arr[105];
int brr[105];

int main(){
	cin >> n; 
	for(int i = 0; i < n; i++){
		cin >> arr[i] ;
		brr[i] = arr[i];
	}
	for(int i = 0; i < n; i++){
		temp = arr[i];
		int j = i;
		while( j > 0 && arr[j-1] > temp){
			arr[j] = arr[j-1];
			j = j-1;
		}
		arr[j] = temp;
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if (brr[i] == arr[j]){
				cout << j+1 <<" ";
			}
		}
	}
}
