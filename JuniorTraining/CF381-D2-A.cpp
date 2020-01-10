#include<bits/stdc++.h> 

using namespace std;

int main(){
	int n, score1 = 0, score2 = 0, val, sum = 0; 
	list<int> v;

	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> val;
		v.push_back(val);
	}
	for(int i = 0; i < n; i++){
		if( i % 2 == 0){
			if(v.front() > v.back()){
				score1 = score1 + v.front();
				v.pop_front();
			}else{
				score1 = score1 + v.back();
				v.pop_back();
			}
		}else{
			score2 = score2 + v[i];
			if(v.front() > v.back()){
				score2 = score2 + v.front();
				v.pop_front();
			}else{
				score2 = score2 + v.back();
				v.pop_back();
			}
		}
	}
	cout << score1 << " "<< score2;
	return 0;
}