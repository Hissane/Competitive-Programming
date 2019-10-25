#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	list<int> list{n};
	if( n == 1){
		cout << n;
	}else if(n < 4){
		cout << "NO SOLUTION";
	}else{
		for(int i = 1; i < n; i++){
			if(i % 2 == 0){
				list.push_back(i);
			}else{
				list.push_front(i);
			}
		}
		for(int e : list){
			cout << e << " ";
		}
	}
	return 0;
}