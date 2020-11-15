class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle == ""){
            return 0;
        }
        if(needle.length() > haystack.length()){
            return -1;
        }
        for(int i = 0; i < haystack.length(); i++){
            if(haystack[i] == needle[0]){
                int l = i;
                int j = 0;
                while(haystack[l] == needle[j] && j < needle.length() && l < haystack.length()){
                    l++;
                    j++;
                }
                if(j == needle.length()&& l <= haystack.length()){
                    return i;
                }
            }
        }
        return -1;
    }
};
//