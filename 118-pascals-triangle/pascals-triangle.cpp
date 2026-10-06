class Solution {
public:
    vector<vector<int>> generate(int numRows) {
  vector<vector<int>> triangle(numRows);

        for (int r = 0; r < numRows; r++) {
            triangle[r].resize(r + 1);
    
            triangle[r][0] = 1;
            triangle[r][r] = 1;

           
            for (int c = 1; c < r; c++) {
                
                triangle[r][c] = triangle[r-1][c-1] + triangle[r-1][c];
            }
        }

        
        return triangle;
    }
};