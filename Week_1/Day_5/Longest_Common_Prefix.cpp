class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        sort(strs.begin(),strs.end());
        int i = 0;
        while(i<strs[0].length() && i<strs.back().length() && strs[0][i]==strs.back()[i]){
            ans+=strs[0][i];
            i++;
        }
        return ans;

        
    }
};
