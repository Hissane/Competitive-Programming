#include<bits/stdc++.h> 

using namespace std;

int main(){
	int arr[5];
	string str;
	int count = 0;
	int j;

	cin >> arr[1] >> arr[2] >> arr[3] >> arr[4];
	cin >> str;
	for(int i = 0; i < str.length(); i++){
		j = str[i] - 48;
		count = count + arr[j];
	}
	cout << count;

	return 0;
}