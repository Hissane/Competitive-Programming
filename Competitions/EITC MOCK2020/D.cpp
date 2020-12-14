#include<bits/stdc++.h>

using namespace std;


int main(){
	long long n, p;
	long long inv[100005];
	map<long long, long long> map;
	cin >> n >> p;
	long long ans = 0;
	for(long long i = 0; i < n; i++){
		long long tmp; 
		cin >> tmp;
		if(tmp%p == 0) 
			ans++;
		else 
			map[tmp%p]++;
	}

	inv[1] = 1;
	for(long long i = 2; i < p; ++i){
    	inv[i] = p - (p/i) * inv[p%i] % p;
	}

	for(auto x : map){
		long long h = inv[x.first];
		if(h == x.first) 
			continue;
		ans += max(map[h],x.second);
		map[x.first] = map[h] = 0;
	}
	cout << ans;
	return 0;
}