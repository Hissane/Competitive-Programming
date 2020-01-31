#include<bits/stdc++.h>

using namespace std;

int main(){
	int arr[5] = {0};
	string s;
	cin >> s;
	if(s.length() == 1){
		cout << s;
		return 0;
	}
	for(int i = 0; i < s.length(); i++){
		if( s[i] != '+'){
			if( s[i] == '1'){
				arr[1]++;
			}else if(s[i] == '2'){
				arr[2]++;
			}else if(s[i] == '3'){
				arr[3]++;
			}
		}
	}
	for(int i = 1; i < 4; i++){
		for(int j = 0; j < arr[i]; j++){
			cout << i;
			if(j != (arr[i]-1) ){
				cout << "+";
			}
		}
		if(arr[i+1] != 0 && (arr[i] != 0 || arr[i-1] != 0 )){
			cout << "+";
		}
	}
	return 0;
}