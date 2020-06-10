#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, s, dim, res;
    string chr;
    cin >> n >> s;
    for(int i = 0; i < n; i++){
    	int arr[10000007], ints [10000007];
    	res = 0;
    	for(int j = 0; j < s; j++){
    		cin >> ints[j] >> chr >> arr[j];
    	}
    	while(next_permutation(ints, ints + s)){

    		for(int k = 0; k < s; k++){
    			if(arr[k] != ints[k]){
    				res++;
    				flag = 1;
    				break;
    		}
    	}
    	cout << res << "\n";
    }
	
	return 0;
}