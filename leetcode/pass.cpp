#include<bits/stdc++.h>

using namespace std;

int main(){

	string password = "CYCTF{ju$@rcs_3l771l_@_t}bd3cfdr0y_u0t__03_0l3m";
	char newPass[50];
	for(int i = 0; i < 9; i++){
		newPass[i] = password[i];
	}
	for(int i = 9; i < 24; i++){
		newPass[i] = password[32-i];
	}
	for(int i = 24; i < 47; i = i + 1){
		newPass[i] = password[70-i];
	}
	for(int i = 45; i < 25; i = i - 2){
		newPass[i] = password[i];
	}
	for(int i = 0; i < 46; i++){
		cout << newPass[i];
	}
	cout << endl << password.length() << " " << newPass.length();
}