class Solution {
public:
    int countPrimes(int n) {
        int v[5000006];
        for(int i = 2; i <= n; i++){
            v[i] = 0;
        }
        for(int i = 2; i*i <= n; i++){
            if(v[i]== 0){
                for(int j = i*i; j <= n;j +=i){
                    v[j] = 1;
                }
            }
        }
        int count = 0;
        for(int i = 2; i < n; i++){
            if(v[i] == 0){
                count++;
            }
        }
        return count;
    }
};