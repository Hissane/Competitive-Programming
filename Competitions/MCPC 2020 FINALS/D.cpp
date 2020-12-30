#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("in","r",stdin);
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t, n, val, min, max; 
    string resmin, resmax;
    cin >> t; 
    for(int i = 0; i < t; i++){
    	cin << n;
    	for(int j = 0; j < n; j++){
    		cin << val;
    		if(val < min){
    			min = val;
    			resmin = "Youssef";
    		}
    		if(val > max){
    			max = val; 
    			resmax = "Youssef";
    		}
    	}
    	for(int j = 0; j < n; j++){
    		cin << val;
    		if(val < min){
    			min = val;
    			resmin = "Rashad";
    		}
    		if(val > max){
    			max = val; 
    			resmax = "Rashad";
    		}
    	}
    	if(resmin == "Youssef" || resmax = "Youssef"){
    		cout << "Youssef";
    	}else{
    		cout << "Rashad";
    	}
    } 
    return 0;
}