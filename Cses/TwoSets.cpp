#include<bits/stdc++.h>

using namespace std;

int main(){
	long n;
	int half, half2;
	cin >> n;
	if((n*(n+1)/2) % 2 != 0 ){
		cout << "NO";
	}else{
		cout << "YES" << endl;
		if(n % 2){
			half = n / 2;
			cout << half << endl;
			for(int i = 1; i < half; i = i+2){
				cout << i << " " << n - i << " ";
			}
			cout << n;
			half2 = n - half;
			cout << endl << half2 << endl; 
			for(int i = 2; i < half2 + 2; i = i+2){
				cout << i << " " << n-i << " ";
			}
		}else{
			half = n / 2; 
			cout << half << endl;
			for(int i = 2; i < n; i = i+4){
				//cout << i << " " << i + 1 << " " << n - i - 1 << " " << n - i << " ";
				cout << i << " " << i + 1 << " ";
			}
			cout << endl << half << endl;
			for(int i = 4; i < n; i = i+4){
				cout << i << " " << i + 1 << " "; 
			}
			cout << 1 << " " << n;

		}
	}
	return 0;
}