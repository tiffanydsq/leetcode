class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.size()==0) return NULL;
        int res=nums[0],maxi=nums[0],mini=nums[0];
        for(int i=1;i<nums.size();i++){
            int t1=maxi,t2=mini;
            maxi=max(max(t1*nums[i],t2*nums[i]),nums[i]);
            mini=min(min(t1*nums[i],t2*nums[i]),nums[i]);
            res=max(res,maxi);
        }
        return res;
    }
};