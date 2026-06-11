class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector <int> ans;
        int minr=0,maxr=m-1,minc=0,maxc=n-1;
        while (minr <= maxr && minc <= maxc)
        {
            for(int i = minc; i <= maxc; i++)
            {
                ans.push_back(matrix[minr][i]);
            }
            minr++;
            if(minr > maxr || minc > maxc) break;
            for(int i = minr; i <= maxr; i++)
            {
                ans.push_back(matrix[i][maxc]);
            }
            maxc--;
            if(minr > maxr || minc > maxc) break;
            for(int i = maxc;i >= minc;i--)
            {
                ans.push_back(matrix[maxr][i]);
            }
            maxr--;
            if(minr > maxr || minc > maxc) break;
            for(int i = maxr;i >= minr;i--)
            {
                ans.push_back(matrix[i][minc]);
            }
            minc++;
        }
        return ans; 
    }
};
