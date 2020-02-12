#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, res = 0;
	string s;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> s;
		if(s == "X++" || s == "++X"){
			res++;
		}else{
			res--;
		}
	}
	cout << res;
	return 0;
}