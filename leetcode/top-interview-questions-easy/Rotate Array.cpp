class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size(), m = nums.size();;
        if(n <= 1){
            return;
        }
        k %= nums.size();
        for(int i = 0; i <(n-k); i++){
            nums.push_back(nums[i]);
        }
        for(int i = (n-k); i < nums.size(); i++){
            nums[i-(n-k)] = nums[i];
        }
        nums.erase(nums.begin()+m, nums.begin()+nums.size());
    }
};