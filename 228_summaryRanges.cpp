class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        if(!nums.size())  return res;
        int pre=nums[0];
        string fst=to_string(pre),sign,lst;
        
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=pre+1)  {
                res.push_back(fst+sign+lst);
                fst=to_string(nums[i]);
                sign="";
                lst="";
            }
            else if(nums[i]==pre+1){
                sign="->";
                lst=to_string(nums[i]);
            }
            pre=nums[i];
        }
        res.push_back(fst+sign+lst);
        return res;
    }
};