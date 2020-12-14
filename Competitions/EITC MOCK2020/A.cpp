#include<bits/stdc++.h> 

using namespace std;

int main(){
	int t, k;
	long long ans, val; 
	cin >> t; 
	for(int i = 0; i < t; i++){
		cin >> k;
		ans = 0;
		for(int j = 0; j < k; j++){
			cin >> val;
			ans ^= val;
		}
		if(ans == 0){
			cout << "Satan is not playing!" << endl;
		}else{
			cout << "Satan accepts the challenge!" << endl;
		}
	}
	return 0;
}