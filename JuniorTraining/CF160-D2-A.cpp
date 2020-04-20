#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, var, sum = 0, goal, res = 1; 
	vector<int> v;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> var;
		v.push_back(var);
		sum += var;
	}
	sort(v.begin(), v.end(), greater<int>());
	cout << endl;
	int i = 0;
	goal = v[i];
	while (goal <= ceil(sum / 2)){
		res++;
		i++;
		goal += v[i];

	}
	cout << res;
	return 0;
}