#include<bits/stdc++.h> 

using namespace std;

int main(){

	int t, m, n, ms, ns; 
	char arr[50][50];
	char val;
	string v = "IEHOVA#";
	cin >> t;

	for(int i = 0; i < t; i++){
		
		cin >> m >> n;
		for(int j = 0; j < m; j++){
			for(int k = 0; k < n; k++){
				cin >> val;
				arr[j][k] = val;
				if(val == '@'){
					ms = j;
					ns = k;
				}
			}
		}
		int o = 0;
		while(o < 7){
			if(ns-1 >= 0 && arr[ms][ns-1] == v[o]){
				cout << "left";
				ns = ns-1;
			}else if(ns+1 < n && arr[ms][ns+1] == v[o]){
				cout << "right";
				ns = ns+1;
			}else if(ms-1 >= 0 && arr[ms-1][ns] == v[o]){
				cout << "forth";
				ms = ms-1;
			}else if(ms+1 < m && arr[ms+1][ns] == v[o]){
				cout << "forth";
				ms = ms+1;
			}
			if( o < 6){
				cout << " ";
			}
			o++;
		}
		cout << endl;
	}
	return 0;
}
