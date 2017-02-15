class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        if(nums.size()<2) return 0;
        int a=1,b=nums.size()-1;
        int t=nums.size();
        while(1){
            int m=(b+a)/2;
            int count=0;
            for(int j=0;j<nums.size();j++){
                if(nums[j]>=a&&nums[j]<=m) count++;
            }
            if(count>m-a+1) b=m;
            else a=m+1;
            if(a==b) return a;
        }
        return 0;
    }
};