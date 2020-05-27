#include <cstdio>
 
using namespace std;
 
#define MAX_SIZE 100005
 
#define max(a, b) ((a) > (b) ? (a) : (b))
 
long long X, x[MAX_SIZE], c[MAX_SIZE], q[MAX_SIZE];
int n;
 
int check(long long val) {
  long long budget = X;
  for (int k = 0; k < n; k++) {
    budget -= max(0L, (val * x[k] - q[k]) * c[k]);
    if (budget < 0) {
    	return 0;
  	}
  }
  return 1;
}
 
int main() {
  int t;
  scanf("%d", &t);
  for (int j = 0; j < t; j++) {
    scanf("%lld %d", &X, &n);
    for (int i = 0; i < n; i++) {
      scanf("%lld %lld %lld", x + i, q + i, c + i);
    }
    long long left = 0, right = 1000000000000L, mid, ans = -1L;
    while (left <= right) {
      mid = (left + right) / 2;
      if (check(mid)) {
        left = mid + 1;
        ans = mid;
      } else {
        right = mid - 1;
      }
    }
    printf("%lld\n", ans);
  }
  return 0;
}