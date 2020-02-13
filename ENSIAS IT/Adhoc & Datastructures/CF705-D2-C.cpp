#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, q, res = 0, type, app, seen = 0;
	map<int, int> map;
	vector<pair<int, int>> v;
	cin >> n >> q;
	for(int i = 0; i < q; i++){
		cin >> type >> app;
		if( type == 1){
			map[app]++;
			res++;
			cout << res << endl;
		}else if(type == 2){
			res = res - map[app];
			seen = seen + map[app];
			map[app] = 0;
			cout << res << endl;
		}else{
			res = res - (app - seen);
			cout << res << endl;
		}
	}
	return 0;
}