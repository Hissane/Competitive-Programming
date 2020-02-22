#include<bits/stdc++.h> 

using namespace std;

int main(){
	int B, L, D, val;
	int counter = 0;
	int scoresB[100005];
	map<int, int, greater<int>> scores;
	map<int, int> signup;
	int infosL[100005][4];
	vector<int> booksL[100005];
	cin >> B >> L >> D;
	for(int i = 0; i < B; i++){
		cin >> scoresB[i];
		scores[scoresB[i]] = i;
	}
	for(int i = 0; i < L; i++){
		cin >> infosL[i][0] >> infosL[i][1] >> infosL[i][2];
		if(infosL[i][1] < D){
			counter++;
		}
		signup[infosL[i][1]] = i;
		for(int j = 0; j < infosL[i][0]; j++){
			//cin >> booksL[i][j];
			cin >> val;
			booksL[i].push_back(val);
		}
	}

	cout << counter << endl;
	for(auto x : signup){
		int count = 0;
		int nbooks = infosL[x.second][2]*(D - x.first);
		cout << x.second << " " << nbooks << endl;
		for(auto y : scores){
			for(int i = 0; i < infosL[x.second][0] && count < nbooks; i++){
				if(y.second == booksL[x.second][i]){
					cout << y.second << " ";
					y.second  = 0;
					count++;
				}
			}
			
		}
		cout << endl;
	}
	return 0;
}