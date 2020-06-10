#include<bits/stdc++.h>

using namespace std;

int visited[30][30] = {0};
int arr[30][30] = {0};

int counter(int i, int j, int n){
	visited[i][j] = 1;
	for(int k = -1; k < 2; k++){
		for(int l = -1; l < 2; l++){
			if(arr[i+k][j+l] = 1 && visited[i+k][j+l] == 0 && (i+k) > -1 && (i+k) < n && (j+l) > -1 && (j+l) < n){
				counter(i+k, j+l, n);
			}
		}
	}
	return 0;
}

int main(){
	int n;
	while(cin >> n){
		int res = 0;
		arr[30][30] = {0};
		visited[30][30] = {0};
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> arr[i][j];
			}
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				if(arr[i][j] = 1 && visited[i][j] == 0){
					counter(i, j, n);
					res++;
				}
			}
		}
		cout << res << endl;
	}
	return 0;
}