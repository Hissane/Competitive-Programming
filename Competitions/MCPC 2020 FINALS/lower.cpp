#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("in","r",stdin);
    ios::sync_with_stdio(false);
    cin.tie(0);

    
    int k;
    int n;
    int arr[100005];
    cin >> n >> k;

    int l = 0, r = n-1; 
    int mid = (l + r)/2;
    for(int i = 0; i < n; i++){
    	cin >> arr[i];
    }
    while(l < r && arr[mid] != k){
        if(arr[mid] > k){
            r = mid-1;
        }else{
            l = mid;
        }
        int pos = mid;
        mid = l + (r - l)/2;
    }
    cout << mid;
    return 0;
}