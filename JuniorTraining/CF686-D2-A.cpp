#include<bits/stdc++.h>

using namespace std;

int main(){
	long long n, x, val, amount, des = 0;
	char signe;
	cin >> n >> x;
	amount = x;
	for(int i = 0; i < n; i++){
		cin >> signe >> val;
		if(signe == '+'){
			amount += val;
		}else if(signe == '-'){
			if(amount >= val){
				amount -= val;
			}else{
				des++;
			}
		}
	}
	cout << amount << " " << des;
	return 0;
}