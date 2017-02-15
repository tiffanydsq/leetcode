class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        if(matrix.size()==0) return res;
        int left=0,top=0,bottom=matrix.size()-1,right=matrix[0].size()-1;
        int i=0,j=0;
        while(left<=right&&top<=bottom){
            for(i=left;i<=right;i++){
                res.push_back(matrix[top][i]);
            }
            top++;
            for(j=top;j<=bottom;j++){
                res.push_back(matrix[j][right]);
            }
            right--;
            if(top<=bottom) {
                for(i=right;i>=left;i--){
                    res.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            
            if(left<=right){
                for(j=bottom;j>=top;j--){
                    res.push_back(matrix[j][left]);
                }
                left++;
            }
        }
        return res;
    }
};