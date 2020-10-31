class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> map;
        for(int i = 0; i < nums.size(); i++){
            map[nums[i]]++;
        }
        for(auto x : map){
            if(x.second > 1){
                return true;
            }
        }
        return false;
    }
};