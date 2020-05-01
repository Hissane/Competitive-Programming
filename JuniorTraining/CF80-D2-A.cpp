#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, m;
	map<int, int> map;
	map[2] = 3; map[3] = 5; map[5] = 7;	map[7] = 11; map[11] = 13; map[13] = 17; map[17] = 19; map[19] = 23;
	map[23] = 29; map[29] = 31;	map[31] = 37; map[37] = 41;	map[41] = 43; map[43] = 47;
	cin >> n >> m;
	if(map[n] == m){
		cout << "YES";
	}else{
		cout << "NO";
	}
	return 0;
}