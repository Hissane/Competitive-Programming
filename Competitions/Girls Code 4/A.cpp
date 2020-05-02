#include<bits/stdc++.h> 

using namespace std;
int phi(int n) {
    int result = n;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0)
                n /= i;
            result -= result / i;
        }
    }
    if (n > 1)
        result -= result / n;
    return result;
}
int main(){
	int t, a, b, count;
	cin >> t;
	for(int i = 0; i < t; i++){
		cin >> a;
		cout << phi(a) << endl;
	}
	return 0;
}