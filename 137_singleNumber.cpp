class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int v = 0;
        for(int k=31;k>=0;k--){
            int cur = 0;
            for(int i = 0; i < nums.size(); i++){
                cur=cur+((nums[i]&(1<<k))>>k); //(n & ( 1 << k )) >> k
            }
            v=v*2+(cur%3);
        }
        return v;
    }
};

