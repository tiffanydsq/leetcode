class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> resset;
        vector<vector<int>> res;
        if(nums.size()<=2){
            return res;
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            // findtwo(nums,-nums[i],i+1,nums.size()-1,resset);
            int sum=-nums[i],a=i+1,b=nums.size()-1;
            while(a<b){
                int cur=nums[a]+nums[b];
                if(cur==sum&&a<b) {
                    vector<int> add;
                    add.push_back(-sum);
                    add.push_back(nums[a]);
                    add.push_back(nums[b]);
                    // resset.insert(add);
                    res.push_back(add);
                    while(a+1<b&&nums[a]==nums[a+1])    a++;
                    while(b-1>a&&nums[b]==nums[b-1])    b--;
                    a++;
                    b--;
                }
                if(cur<sum&&a<b) a++;
                if(cur>sum&&a<b) b--;
            }
            while(i+1<nums.size()-2&&nums[i]==nums[i+1])    i++;
        }
        // for(auto itm:resset) res.push_back(itm);
        return res;
    }
};
