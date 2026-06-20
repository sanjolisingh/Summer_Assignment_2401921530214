class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        int length = 1, start = 0;
        for(int i = 0; i<n; i++){
            int left = i-1, right = i+1;
            while (left>=0 && right<n && s[left] == s[right]){
                if(length < right-left + 1){
                    length = right - left + 1;
                    start = left;
                }
                left--;
                right++;
            }
            left = i;
            right = i+1;
            while(left >= 0 && right < n && s[left] == s[right]){
                if(length < right - left + 1){
                    length = right - left + 1;
                    start = left;
                }
                left--;
                right++;
            }
        }
        return s.substr(start, length);
    }
};
