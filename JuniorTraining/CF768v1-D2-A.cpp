include<bits/stdc++.h>

using namespace std;

int main(){
	int n, min = 1000000005, max = 0, cmax = 0, cmin = 0, val;
	cin >> n; 
	for(int i = 0; i < n; i++){
		cin >> val;
		if(val == min && val == max){
			cmax++;
		}else if(val > max){
			max = val;
			cmax = 1;
		}else if(val == max){
			cmax++;
		}else if(val < min){
			min = val;
			cmin = 1;
		}else if(val == min){
			cmin++;
		}
	}
	if(n == 1){
		cout << 0;
	}else{
		cout << n - cmin - cmax;
	}
	return 0;
}