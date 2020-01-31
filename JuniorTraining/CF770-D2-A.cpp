#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, k, count = 0, counter = 0;;
	cin >> n >> k;
	for(char c = 97; (c < (97 + k)) && count < n; c++){
		count ++;
		counter ++;
		if(counter > k){
			c = 97;
			counter = 0;
		}
		cout << c;
	}
	return 0;
}