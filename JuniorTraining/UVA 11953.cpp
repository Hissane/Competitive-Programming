#include<bits/stdc++.h> 

using namespace std;

char arr[105][105];

void dfs(char arr[105][105], int a, int b, string dir, int n){
		if(a < n-1 && dir == "vert" && (arr[a+1][b] == 'x'|| arr[a+1][b] == '@')){
			dfs(arr, a+1, b, dir, n);
		}else if(dir == "hor" && b < n- 1 && (arr[a][b+1] == 'x'|| arr[a][b+1] == '@')){
			dfs(arr, a, b+1, dir, n);
		}
	arr[a][b] = '.';
}

int main(){
	int t; 
	int n;
	char val;
	cin >> t;
	for(int i = 0; i < t; i++){
		cin >> n;
		int count = 0;
		for(int j = 0; j < n; j++){
			for(int k = 0; k < n; k++){
				cin >> val ;
				arr[j][k] = val;
			}

		}
		string pos;
		for(int j = 0; j < n; j++){
			for(int k = 0; k < n; k++){
				if(arr[j][k] == 'x'){
					if(k < n-1 && (arr[j][k+1] == 'x' || arr[j][k+1] == '@')){
						pos = "hor";
						dfs(arr, j, k+1, pos, n);
					}else if (j < n - 1 && (arr[j+1][k] == 'x' || arr[j+1][k] == '@')){
						pos = "vert";
						dfs(arr, j+1, k, pos, n);
					}
					//cout << " " << j << " " << k << " ";
					arr[j][k] = '.';
					count++;
				}
			}

		}
		cout << "Case " << i+1 << ": "<< count << endl;
	}
	return 0;
}