class NumMatrix {
private:
    vector<vector<int>>sumMat;
public:
    NumMatrix(vector<vector<int>>& matrix) {
        int rows=matrix.size();
        int cols=matrix[0].size();
        // making extra row and colum of zeros to avoid edge cases
        sumMat=vector<vector<int>>(rows+1,vector<int>(cols+1,0));
        for(int i=0;i<rows;i++){
            int presum=0;
            for(int j=0;j<cols;j++){
                presum+=matrix[i][j];
                int above=sumMat[i][j+1];
                sumMat[i+1][j+1]=presum+above;
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        // we are just addig 1 to given rows and columns so 
        row1++; col1++; row2++; col2++;
        int bottomRight=sumMat[row2][col2];
        int above=sumMat[row1-1][col2];
        int left=sumMat[row2][col1-1];
        int topLeft = sumMat[row1 - 1][col1 - 1];
        return bottomRight-above-left+topLeft;
 
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */