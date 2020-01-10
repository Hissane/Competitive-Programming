#include<bits/stdc++.h> 

using namespace std; 

int main(){
	int n, val1, val2, res = 0;
	vector< pair<int, int> > v;
	cin >> n; 
	for(int i = 0; i < n; i++){
		cin >> val1 >>val2;
		v.push_back(make_pair(val1, val2));
	}
	for(auto x : v){
		for(auto y : v){
			if(x.first == y.second){
				res++;
			}
		}
	}
	cout << res;
	return 0;
}