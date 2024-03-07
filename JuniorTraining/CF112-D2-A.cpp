//#include<bits/stdc++.h>
#include "/Users/mounahissane/Documents/stdc++.h"

using namespace std;

int main(){
	string string1, string2;
	int count = 0;
	cin >> string1 >> string2; 
	for(int i = 0; i < string1.length(); i++){
		if(toupper(string1[i]) == toupper(string2[i])){

		}else if( toupper(string1[i]) > toupper(string2[i])){
			count++;
		}else if(toupper(string1[i]) < toupper(string2[i])){
			count--;
		}
	} 
	if(count > 0){
		cout << 1;
	}else if(count < 0){
		cout << -1;
	}else{
		cout << 0;
	}
	return 0;
}