#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	int i = 0, counter = 0, max_counter = 0;

	cin >> s;
	while(s[i]){
		if(s[i] == s[i+1]){
			counter++;
			if(counter > max_counter){
			    max_counter = counter;
			}
		}else{
			counter = 0;
		}
		i++;
	}
	cout << max_counter+1;
	return 0;
}