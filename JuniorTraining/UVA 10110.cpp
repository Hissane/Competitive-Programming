#include<bits/stdc++.h> 

using namespace std;

int main(){
	unsigned int n;
	unsigned int sq;
	while(cin >> n){
		if( n != 0){
			sq = (int)sqrt(n);
			cout << (sq * sq == n ? "yes" : "no")<<endl;
		}
    }
	return 0;
}