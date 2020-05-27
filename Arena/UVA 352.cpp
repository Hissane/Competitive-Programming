#include<bits/stdc++.h>

using namespace std;

int visited[30][30] = {0};

int counter(int i, int j){
	visited[i][j] = 1;
	for(int k = -1; k < 2; k++){
		for(int l = -1; l < 2; l++){
			if(arr[i+k][j+l] = 1 && visited[i+k][j+l] == 0){
				counter(i+k, j+l);
			}
		}
	}
}

int main(){
	int n, res = 0;
	while(cin >> n){
		int arr[30][30] = {0};
		visted[30][30] = {0};
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> arr[i][j];
			}
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				if(arr[i][j] = 1 && visited[i][j] == 0){
					counter(i, j);
					res++;
				}
			}
		}
		cout << res << endl;
	}
	return 0;
}