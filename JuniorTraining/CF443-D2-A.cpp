#include<bits/stdc++.h>

using namespace std;

int main(){
	int res = 0;
	char a;
	unordered_map<char, int> umap;

	while( cin >> a){
		if((a != '{') && (a != ',') && (a != '}') && (a != ' ')){
			umap[a]++;
		}
	}

	cout << umap.size();
	return 0;
}