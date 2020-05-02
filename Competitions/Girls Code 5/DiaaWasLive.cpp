#include<bits/stdc++.h> 

using namespace std;

int main(){
	int t, n;
	double s1, s;
	int res;
	cin >> t;
	for(int i = 0; i < t; i++){
		cin >> n;
		s1 = 0;
		for(int j = 0; j < n; j++){
			cin >> s;
			s1 += log10(s);
		}
		res = floor(s1) + 1;
		cout << res << endl;
	}
}