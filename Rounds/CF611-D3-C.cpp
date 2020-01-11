#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, val;
	int arr[200005]={0};
	int brr[200005];
	list <int> v;

	cin >> n; 
	for(int i = 1; i <= n; i++){
		cin >> val;
		arr[val] = 1;
		brr[i] = val;
	}
	for(int i = 1; i <=n; i++){
		if(arr[i] == 0){
			v.push_back(i);
		}
	}
	v.sort();
	for(int i = 1; i <= n; i++){
		if(brr[i] == 0){
			if( i == v.back()){
				cout << v.front() << " ";
				v.pop_front();
			}else{
				cout << v.back() << " "; 
				v.pop_back();
			}
		}else{
			cout << brr[i] << " ";
		}
	}

	return 0;
}