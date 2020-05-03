#include<bits/stdc++.h> 

using namespace std;

int main(){
	string s;
	unordered_map<char, int> umap;
	cin >> s;
	for(int i = 0; i < s.length(); i++){
		if(umap[s[i]] < 1){
			cout << s[i];
			umap[s[i]]++;
		}
	}
	return 0;
}