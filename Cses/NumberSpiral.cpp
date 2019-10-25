#include<bits/stdc++.h>

using namespace std; 

int main(){
	long long t, x, y, layer, bottom_right;
	cin >> t;
	for(int i = 0; i < t; i++){
		cin >> x >> y;
		layer = max(x,y);
		bottom_right = layer*(layer - 1) + 1;
		if(layer % 2 == 0){
			if(x > y){
				cout << bottom_right + (max(x,y) - min(x,y)) << endl;
			}else{
				cout << bottom_right - (max(x,y) - min(x,y)) << endl;
			}
			//cout << layer << " " << bottom_right << endl;
		}else{
			if(x > y){
				cout << bottom_right - (max(x,y) - min(x,y)) << endl;
			}else{
				cout << bottom_right + (max(x,y) - min(x,y)) << endl;
			}
			//cout << layer << " " << bottom_right << endl;
		}
	}
	return 0;
}