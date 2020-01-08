#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	map<int, int> umap;
	int val, m, counter, max_occur, j, total = 0;
	int max = 0;
	int arr[100005];
	int brr[100005];
	vector<int> icut;
	cin >> n; 
	for(int i = 0; i < n; i++){
		cin >> val;
		arr[i] = val;
		umap[val]++;
	}
	for(auto x : umap){
		//cout << x.first << " " << x.second << endl;
		if( x.second > 1 ){
			max = x.first;
			max_occur = x.second;
		}
	}
	//cout << max << endl;
	if (max_occur < 3)
	counter = 0;
	j = 0;
	while(arr[j] != max){
		counter = counter + 1;
		icut.push_back(j);
		j++;
	}
	brr[0] = max;
	m = 1;
	j++;
	while(arr[j] != max){
		if(arr[j] < 0){
			icut.push_back(j);
			counter = counter + 1;
			j++;
		}else{
			brr[m] = arr[j];
			total = total + brr[m];
			m++;
			j++;
		}
	}
	j++;
	brr[m] = max;
	total = total + 2*max;
	while(j < n){
		icut.push_back(j);
		counter++;
		j++;
	} 
	cout << total << " " << counter << endl;
	for(auto y : icut){
		cout << y + 1 << " ";
	}
}