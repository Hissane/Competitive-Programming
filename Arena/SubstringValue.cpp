#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	long long  max_so_far, curr_max;
	long long arr[29];

	cin >> s;
	for(int i = 0; i < 26; i++){
		cin >> arr[i];
	}
	max_so_far = arr[s[0] - 'a'];
	for(char c = 'a'; c <= 'z'; c++){
		if(s[0] == c){
			curr_max = arr[c - 'a'];
		}else{
			curr_max = (-1)*arr[s[0] - 'a'];
		}
		for(int i = 1; i < s.length(); i++){
			if(s[i] == c){
				curr_max = max(arr[s[i]-'a'], curr_max + arr[s[i]-'a']);
			}else{
				curr_max = max((-1)*arr[s[i]-'a'], curr_max + (-1)*arr[s[i]-'a']);
			}
			max_so_far = max(max_so_far, curr_max);
		}
	}
	cout << max_so_far;
	return 0;
}