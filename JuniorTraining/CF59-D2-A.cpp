#include <bits/stdc++.h>

using namespace std; 

int main(){
	int upper = 0 , lower = 0;
	string word; 
	cin >> word; 
	for(int i = 0; i < word.length(); i++){
		if(word[i] > 96){
			lower++;
		}else{
			upper++;
		}
	}
	if(upper > lower){
		for(int i = 0; i < word.length(); i++){
			word[i] = toupper(word[i]);
		}
	}else{
		for(int i = 0; i < word.length(); i++){
			word[i] = tolower(word[i]);
		}
	}
	cout << word;
	return 0;
}