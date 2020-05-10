
// still gives a wrong answer
// will be updated soon


#include<bits/stdc++.h>

using namespace std; 

int main(){
	long long n, k, m, res = 0, j, stop = 0,  val;
	vector<long long> v1;
	vector<long long> v2;
	cin >> n >> m >> k;
	for(int i = 0; i < n; i++){
		cin >> val;
		v1.push_back(val);
	}
	for(int j = 0; j < m; j++){
		cin >> val;
		v2.push_back(val);
	}
	
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());
	
	j = 0;
	for(int i = 0; i < n; i++){
		cout << v1[i] << " " << v2[j] <<endl;
		if(v1[i] > k + v2[j]){
			j++;
		}
		if(v2[j] > k + v1[i]){
			i++;
		}
		if(abs(v1[i] - v2[j]) <= k){
			res++;
			j++;
			stop = i;
		}
		if(i == n - 1){
			i = stop + 1;
			j++;	
		}
	}
	cout << res;
	return 0;
}