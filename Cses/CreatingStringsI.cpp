#include<bits/stdc++.h>

using namespace std;

int main(){
	string word; 
	int counter = 0; 
	vector<string> vect;
	cin >> word;
	sort(word.begin(), word.end());
	do{
		counter++;
		vect.push_back(word);
	}while(next_permutation(word.begin(),word.end()));
	cout << counter << endl;
	for(auto e : vect){
		cout << e << endl;
	}
	return 0;
}