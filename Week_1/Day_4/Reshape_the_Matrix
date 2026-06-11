class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int a = mat.size();
        int b = mat[0].size();
        if(a*b!=r*c) return mat;
        vector < vector <int>> reshaped(r, vector <int>(c));
        int row = 0;
        int column = 0;
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                if(column==c){
                    row++;
                    column=0;
                }
                reshaped[row][column]=mat[i][j];
                column++;
            }
        }
        return reshaped;
        
    }
};
