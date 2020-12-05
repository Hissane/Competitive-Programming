class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0){
            return "";
        }
        for(int i = 0; i < strs.size()-1; i++){
            int n = min(strs[i].size(),strs[i+1].size());
            string temp = "";
            int j = 0;
            while(j < n && strs[i][j] == strs[i+1][j]){
                temp += strs[i][j];
                j++;
            }
            strs[i+1] = temp;
        }
        return strs[strs.size()-1];
    }
};