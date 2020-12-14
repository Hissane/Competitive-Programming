#include<bits/stdc++.h> 

using namespace std;

void build(int a[], int v, int tl, int tr) {
    if (tl == tr) {
        t[v] = a[tl];
    } else {
        int tm = (tl + tr) / 2;
        build(a, v*2, tl, tm);
        build(a, v*2+1, tm+1, tr);
        t[v] = t[v*2] + t[v*2+1];
    }
}

int sum(int v, int tl, int tr, int l, int r) {
    if (l > r) 
        return 0;
    if (l == tl && r == tr) {
        return t[v];
    }
    int tm = (tl + tr) / 2;
    return sum(v*2, tl, tm, l, min(r, tm))
           + sum(v*2+1, tm+1, tr, max(l, tm+1), r);
}

void update(int v, int tl, int tr, int pos) {
    if (tl == tr) {
        t[v] = t[v] + 1;
    } else {
        int tm = (tl + tr) / 2;
        if (pos <= tm)
            update(v*2, tl, tm, pos);
        else
            update(v*2+1, tm+1, tr, pos);
        t[v] = t[v*2] + t[v*2+1];
    }
}

int main(){
	int t;
	int n, k; 
	int a[100005];
	int t[4*100005];
	char c;
	cin >> t;
	a[0] = 0;a[1] = 1;
	for(int j = 2; j < 100001; j++){
		a[j] = a[j-1] + a[j-2];
	}
	build(a[], 1, 0, 100005-1);
	for(int i = 0; i < t; i++){
		cin >> n >> k;
		for(int j = 0; j < k; j++){
			cin >> c >> l >> r;
			if(c == "U"){
				update(, l, r, )
			}else if( c == "Q"){
				sum()
			}
		}
	}
	return 0;
}