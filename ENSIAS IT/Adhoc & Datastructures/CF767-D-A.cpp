#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, j, val;
	int arr[100005] = {0};
	cin >> n;
	j = n;
	for(int i = 0; i < n; i++){
		cin >> val;
		arr[val] = 1;
		if(arr[j]){
			while(arr[j]){
				cout << j << " ";
				j--;
			}
			cout << endl;
		}else{
			cout << endl;
		}
	}
	return 0;
}