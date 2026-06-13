
class Solution {
public:
    unordered_map <char, int> getFrequencies(string &s)
    {
        unordered_map <char, int> res;
        for( char c : s ){
            res[c]++;
        }
        return res;
    }
    bool isAnagram(string s, string t) { 
        if (s.size() != t.size()) return false;
        unordered_map <char , int> sCount = getFrequencies(s);
        unordered_map <char , int> tCount = getFrequencies(t);
        for(char c : s){
            if (sCount[c] != tCount[c]) return false;
        }
        return true;
        
    }
};
