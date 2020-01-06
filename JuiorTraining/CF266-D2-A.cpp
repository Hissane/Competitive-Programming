#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, count = 0;
	char prev, character;
	cin >> n;
	cin >> prev; 
	for(int i = 1; i < n; i++){
		cin >> character;
		if(prev == character){
			count++;
		}else{
			prev = character;
		}
	}
	cout << count;
	return 0;
}