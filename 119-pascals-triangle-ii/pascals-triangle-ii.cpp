class Solution {
public:
    vector<int> getRow(int rowIndex) {
        
     vector<int> row;

         
        for (int r = 0; r <= rowIndex; r++) {
             
            row.push_back(1);

            
            for (int c = r - 1; c > 0; c--) {
                row[c] = row[c] + row[c-1];
            }
        }

         
        return row;
    }
};