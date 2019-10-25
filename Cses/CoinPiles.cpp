#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	long a, b;
	cin >> t;
	for(int i = 0; i < t; i++){
		cin >> a >> b;
		if((a + b) % 3 != 0){
			cout << "NO" << endl;
		}else{
			if(max(a,b) <= 2*min(a,b)){
				cout << "YES" << endl;
			}else{
				cout << "NO"<< endl;
			}
		}
	}
	return 0;
}