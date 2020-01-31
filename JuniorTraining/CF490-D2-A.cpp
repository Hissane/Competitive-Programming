#include<bits/stdc++.h>

#define min(x,y) (x>y ? y:x)

using namespace std; 

int main(){
	int n, maximum, val;
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;

	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> val;
		if(val == 1){
			v1.push_back(i);
		}else if(val == 2){
			v2.push_back(i);
		}else if(val == 3){
			v3.push_back(i);
		}
	}
	int n1 = v1.size();
	int n2 = v2.size();
	int n3 = v3.size();
	maximum = min(n1, n2);
	maximum = min(maximum, n3);
	cout << maximum << endl;
	for(int i = 0; i < maximum; i++){
		cout << v1[i] << " " << v2[i] << " " << v3[i] << endl;
	}
	return 0;
}