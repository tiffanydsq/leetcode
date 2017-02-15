class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size()==0) return -1;
        int a=0,b=nums.size()-1,m=(a+b)/2;
        while(m>a&&m<b){
            if(target==nums[a]) return a;
            if(target==nums[b]) return b;
            if(target==nums[m]) return m;
            if(nums[a]>nums[m]){
                if(target>nums[m]&&target<nums[b])
                    a=m;
                else
                    b=m;
            }
            if(nums[a]<=nums[m]){
                if(target>nums[a]&&target<nums[m])
                    b=m;
                else
                    a=m;
            }
            m=(a+b)/2;
        }
        if(target==nums[a]) return a;
        if(target==nums[b]) return b;
        return -1;
        
    }
};