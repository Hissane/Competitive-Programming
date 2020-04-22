#include<bits/stdc++.h>

using namespace std;

int main(){
	int step, mod;

	while(cin >> step >> mod){
		map<int, int> map;
		int seed = 0, flag = 0;
		for(int i = 1; i <= mod; i++){
			seed = (seed + step) % mod;
			//cout << "seed(" << i << ") = " << seed <<endl;
			if(map[seed] == 1){
				cout << right << setw(10) << step << right << setw(10) << mod << "    Bad Choice" << endl << endl;
				flag = 1;
				break;
			}else{
				map[seed] = 1;
			}
		}
		if(flag == 0){
			cout << right <<setw(10) << step << right << setw(10) << mod << "    Good Choice" << endl << endl;
		}
		for(auto x : map){
			x.second = 0;
		}
	}
	return 0;
}