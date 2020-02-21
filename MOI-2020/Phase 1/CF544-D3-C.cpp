#include<bits/stdc++.h> 

using namespace std; 

int main(){
	int n;
	//int arr[200005];
	vector<int> arr;
	int res2 = 0, res = 1, val;

	cin >> n; 
	for(int i = 0; i < n; i++){
		cin >> val;
		arr.push_back(val);
	}
	sort(arr.begin(), arr.end());
	int p1 = 0, p2 = 1;
	for(int i = 0; i < n ; i++){
		if((arr[p2] - arr[p1]) <= 5 && p2 < n){
			p2++;
			res++;
		}else{
			p1 = p2; 
			p2 = p1+1;
			if(res > res2){
				res2 = res;
			}
			res = 1;
		}
	}
	cout << (res2 > res ? res2 : res);
	return 0;
}