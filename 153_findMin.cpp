class Solution {
public:
    int findMin(vector<int>& nums) {
        if(!nums.size()) return NULL;
        int a=0,b=nums.size()-1,mid;
        while(b-a>1){
            mid=(a+b)/2;
            if(nums[a]>nums[mid]) b=mid;
            if(nums[mid]>nums[b]) a=mid;
            if(nums[a]<nums[mid]&&nums[mid]<nums[b])
                return nums[a];
        }
        return min(nums[a],nums[b]);
    }
};