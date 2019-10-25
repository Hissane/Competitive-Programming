#include<bits/stdc++.h>

using namespace std;

int main(){
	int t, n, m;
	string word; 
	cin >> t;
	for(int i = 0; i < t; i++){
		cin >> word >> n >> m;
		sort(word.begin()+n,word.begin()+m+1, greater<int>());
		cout << word << endl;
	}

	return 0;
}