class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        set<int> vset;
        long lt=long(t);
        for(int i=0;i<nums.size();i++){
            if(i>k) vset.erase(nums[i-k-1]);
            set<int>::iterator small=vset.lower_bound(max(long(INT32_MIN),nums[i]-lt)); // >=nums[i]-t
            if(small!=vset.end()&&*small<=min(long(INT32_MAX),nums[i]+lt)) return true;
            vset.insert(nums[i]);
        }
        return false;
    }
};