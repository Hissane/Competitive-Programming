#include<bits/stdc++.h>

using namespace std;

int main(){
	int T, res;
	vector<char> vi;
	vector<char> vo;
	string s;
	cin >> T;
	for(int i = 0; i < T; i++){
		cin >> s;
		res = 0;
		vi.clear();
		vo.clear();
		for(int j = 0; j < s.size(); j++){
			if(s[j] == 'I' || s[j] == 'i'){
				vi.push_back(s[j]);
			}else{
				vo.push_back(s[j]);
			}
		}
		for(int j = 0; j < vi.size(); j++){
			if(vi[j] == 'I' && vo[j] == 'O'){
				res++;
			}
		}
		cout << "Case #" << i+1 << ": " << res << endl;
	}
}