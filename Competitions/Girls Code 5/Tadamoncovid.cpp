#include<bits/stdc++.h>

using namespace std;

void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
int bubbleSort(int arr[], int n){ 
   int i, j, count = 0; 
   bool swapped; 
   for (i = 0; i < n-1; i++) 
   { 
     swapped = false; 
     for (j = 0; j < n-i-1; j++) 
     { 
        if (arr[j] > arr[j+1]) 
        { 
           swap(&arr[j], &arr[j+1]); 
           count++;
           swapped = true; 
        } 
     } 
     if (swapped == false) 
        break; 
   } 
   return count;
}
  

int main(){
	int n, val, res;
	int arr[100005];
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> val;
		arr[i] = val;
	}
	res = bubbleSort(arr, n);
	cout << res;;
	return 0;
}