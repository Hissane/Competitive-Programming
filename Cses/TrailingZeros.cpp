#include<bits/stdc++.h>

using namespace std;

int main(){
	long n, counter = 0; 
	cin >> n;
	for(int i = 5; n / i > 0; i = i*5){
		counter = counter + n/i;
	}
	cout << counter;
	return 0;
}