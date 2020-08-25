#include<bits/stdc++.h> 

using namespace std; 

char arr[30][30];
int visited[30][30];
int n;

void dfs(int i, int j){	
	visited[i][j] = 1;
	for(int k = -1; k < 2; k++){
		for(int l = -1; l < 2; l++){
			if(i+k < n && i+k >= 0 && i+k >= 0 && j+l < n && visited[i+k][j+l] == 0 && arr[i+k][j+l] == '1'){
				dfs(i+k,j+l);
			}
		}
	}
}

int main(){
	int count = 1;
	while(cin >> n){
		int res = 0;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> arr[i][j];
				visited[i][j] = 0;
			}
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				if(visited[i][j] == 0 && arr[i][j] == '1'){
					dfs(i,j);
					res++;
				}
			}
		}
		cout << "Image number " << count << " contains " << res << " war eagles." << endl;
		count++;
	}
	return 0; 
}