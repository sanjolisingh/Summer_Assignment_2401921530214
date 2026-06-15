class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector <int> result ;
        unordered_map <char, int> umap;
        for (int i=0; i<p.size(); i++)
        umap[p[i]]++;
        int count = umap.size();
        int i=0,j=0;
        while (j<s.size())
        {
            if(umap.find(s[j]) != umap.end())
            {
                umap[s[j]]--;
                if(umap[s[j]] == 0)
                count --;
            }
            if(j-i+1 == p.size())
            {
                if(count == 0)
                result.push_back(i);
                if(umap.find(s[i]) != umap.end())
                {
                    if(umap[s[i]] == 0)
                    count++;
                    umap[s[i]]++;
                }
                i++;
            }
            j++;
        }
        return result;
    }
};
