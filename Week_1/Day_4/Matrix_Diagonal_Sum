class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int a = mat.size();
        int sum = 0;
        for(int i=0;i<a;++i)
        {
            sum+= mat[i][i];
            sum+= mat[i][a-i-1];
        }
            if(a%2)
            {
                sum-=mat[a/2][a/2];
            }
        return sum;
    }
};
