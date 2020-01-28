#include<bits/stdc++.h> 

using namespace std; 

bool comp(int a, int b) 
{ 
    return (a < b); 
} 

int main(){
	int y, w, res; 
	cin >> y >> w; 
	res = 6 - max(y, w) + 1;
	if(res == 6)
		cout << "1/1";
	if(res == 5)
		cout << "5/6";
	if(res == 4)
		cout << "2/3";
	if(res == 3)
		cout << "1/2";
	if(res == 2)
		cout << "1/3";
	if(res == 1)
		cout << "1/6";

	return 0;
}