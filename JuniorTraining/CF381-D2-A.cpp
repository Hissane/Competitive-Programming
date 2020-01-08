#include<bits/stdc++.h> 

using namespace std;

int main(){
	int n, score1 = 0, score2 = 0, val, sum = 0; 
	vector<int> v;

	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> val;
		v.push_back(val);
	}
	for(auto x : v){
		cout << x << " ";
	}
	cout << endl;
	sort(v.begin(), v.end(), greater<int>());
	for(auto x : v){
		cout << x << " ";
	}
	cout << endl;
	for(int i = 0; i < n; i++){
		if( i % 2 == 0){
			score1 = score1 + v[i];
		}else{
			score2 = score2 + v[i];
		}
		sum += v[i];
	}
	cout << score1 << " "<< score2 << " "<< sum;
	return 0;
}