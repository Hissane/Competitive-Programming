#include<bits/stdc++.h> 

using namespace std; 

int main(){
	int n, val; 
	char c;
	list<int> queue;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> c;
		if( c == 'E'){
			cin >> val;
			queue.push_back(val);
			cout << queue.size() <<endl;
		}else{
			if(queue.size() > 0){
				cout << queue.front()<< " ";
				queue.pop_front();
				cout << queue.size() << endl;
			}else{
				cout << -1 << " " << queue.size() << endl;
			}
			
		}
	}
	return 0;
}