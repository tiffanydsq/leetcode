class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int pre=1,post=1,len=nums.size();
        vector<int> output(len,1);
        for (int i=0;i<len;i++){
            
            output[i]=pre*output[i];
            pre=pre*nums[i];
            output[len-i-1]=post*output[len-i-1];
            post=post*nums[len-i-1];
        }
        return output;
    }
};