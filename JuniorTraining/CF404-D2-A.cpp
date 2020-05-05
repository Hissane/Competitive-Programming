#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	char x, o;
	char arr[303][303];
	cin >> n;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> arr[i][j];
		}
	}
	x = arr[0][0];
	o = arr[0][1];
	if(x == o){
		cout << "NO";
		return 0;
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if((i == j) || (i == (n - j - 1))){
				if(arr[i][j] != x){
					cout << "NO";
					return 0;
				}
			}else{
				if(arr[i][j] != o){
					cout << "NO";
					return 0;
				}
			}
		}
	}
	cout << "YES";
	return 0;
}

