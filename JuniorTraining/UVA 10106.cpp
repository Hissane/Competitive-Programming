#include<bits/stdc++.h>

using namespace std;

int main(){
	int n1, n2;
	string s1;
	string s2;
	int arr1[1000];
	int arr2[1000];
	int ans[100005];
	while(cin >> s1 >> s2){
		n1 = s1.length();
		n2 = s2.length();
		for(int i = 0; i < n1; i++){
			arr1[n1-i-1] = s1[i];
		}
		for(int i = 0; i < n2; i++){
			arr2[n2-i-1] = s2[i];
		}


		for(int i = 0; i < n2; i++){
			for(int j = 0; j < n1; j++){
				ans[i+j] += arr2[j]*arr1[i];
			}
		}
		int i = 100004;
		while(i > 0 && ans[i]==0){
			i--;
		}
		for(int j = 0; j <= i; j++){
			if(ans[j] > 9){
				ans[j+1] += ans[j]/10;
				ans[j] = ans[j]%10;
			}
		}
		for(; i >= 0; i--){
			cout << ans[i];
		}
		cout << endl;
	}
	return 0;
}