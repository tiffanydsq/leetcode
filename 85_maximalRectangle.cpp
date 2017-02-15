class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        if(matrix.size()==0) return 0;
        int nr=matrix.size(),nc=matrix[0].size();
        vector<int> left(nc,0),right(nc,nc-1),height(nc,0);
        int res=0;
        for(int i=0;i<nr;i++){
            int cur_left=0,cur_right=nc-1;
            for(int j=0;j<nc;j++){
                if (matrix[i][j]=='0') {
                    cur_left=j+1;
                    left[j]=0;
                }
                else left[j]=max(cur_left,left[j]);
            }
            for(int j=nc-1;j>=0;j--){
                if (matrix[i][j]=='0') {
                    cur_right=j-1;
                    right[j]=nc;
                }
                else right[j]=min(cur_right,right[j]);
            }
            for(int j=0;j<nc;j++){
                if (matrix[i][j]=='0'){
                    height[j]=0;
                }
                if (matrix[i][j]=='1'){
                    height[j]++;
                    res=max(res,(right[j]-left[j]+1)*height[j]);
                }
            }
        }
        return res;
    }
};

