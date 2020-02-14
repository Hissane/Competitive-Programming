#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, q, res = 0, type, app;
	int openedtill[300005];
	map<int, int> map;
	vector<pair<int, int>> v;
	cin >> n >> q;
	openedtill[0] = 0; 
	for(int i = 0; i < q; i++){
		cin >> type >> app;
		if( type == 1){
			map[app]++;
			res++;
			cout << res << endl;
			openedtill[i + 1] = openedtill[i];
		}else if(type == 2){
			res = res - map[app];
			openedtill[i + 1] = openedtill[i] + map[app];
			map[app] = 0;
			cout << res << endl;
		}else{
			res = res - app + openedtill[app];
			cout << res << endl;
			openedtill[i + 1] = openedtill[i];
		}
	}
	return 0;
}