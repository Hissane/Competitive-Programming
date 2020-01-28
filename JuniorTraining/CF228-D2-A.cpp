#include<bits/stdc++.h>

using namespace std; 
 
int main(){
	int s1, s2, s3, s4, res = 0;
	map<int, int> map;
	cin >> s1 >> s2 >> s3 >> s4;
	map[s1]++;
	map[s2]++;
	map[s3]++;
	map[s4]++;
	for(auto x : map){
		if( x.second > 1){
			res += x.second - 1;
		}
	}
	cout << res;
	return 0;
}