#include<bits/stdc++.h>

using namespace std;

int arr[100006]={};

int main(){
	int n, m;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> m;
		arr[m]++;
	}
	for(int i = 0; i < 100006; i++){
		if(arr[i] != 0){
			cout << i <<" "<< arr[i] <<endl;
		}
	}
	return 0;
}