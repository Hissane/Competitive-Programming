#include<bits/stdc++.h>

using namespace std;

int main(){
	string input;
	char mid_letter;
	int counter = 0;
	map<char, int> map;
	list <char> list;
	cin >> input;

	for(int i = 0; i < input.size(); i++){
		map[input[i]]++;
	}

	for(auto e : map){
		if(e.second & 1){
			counter++;
			mid_letter = (char)e.first;
		}
	}
	switch(counter){
		case 0 : 
			for(auto e : map){
				for(int i = 0; i < e.second; i = i + 2){
					list.push_back(e.first);
					list.push_front(e.first);
				}
			}
			break;
		case 1 :
			list.push_back(mid_letter);
			for(auto e : map){
				for(int i = 1; i < e.second; i = i + 2){
					list.push_back(e.first);
					list.push_front(e.first);
				}
			}
			break;
		default :
			cout << "NO SOLUTION";
			return 0;
	} 

	for(auto e : list){
		cout << e;
	}
	//cout << endl << counter << endl << mid_letter;
	return 0;
}