#include<bits/stdc++.h> 

using namespace std; 

int main(){
	int n, m;
	int flag = 0;
	int arr[1000006], brr[1000006];
	cin >> n >> m;
	for(int i=0; i < n; i++){
		cin >> arr[i];
	}
	for(int i=0; i < m; i++){
		cin >> brr[i];
	}
	int i = 0, j = 0;
	while(i < n && j < m){
		if(arr[i] == brr[j]){
			cout << arr[i] << " "; 
			i++; 
			j++;
			flag++;
		}else if(arr[i] < brr[j]){
			i++;
		}else{
			j++;
		}
	}
	if(flag == 0){
		cout << "Empty";
	}
	return 0;
}