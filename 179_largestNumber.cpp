class Solution {
public:
    struct myclass {
        bool operator() (string s1,string s2) { return s1+s2>s2+s1;}
    } myobject;

    string largestNumber(vector<int>& nums) {
        vector<string> arr;
        for(auto num:nums){
            arr.push_back(to_string(num));
        }
        sort(arr.begin(),arr.end(),myobject);
        string res;
        for(auto str:arr){
            res=res+str;
        }
        while(res.size()>1&&res[0]=='0') res.erase(res.begin());
        return res;
    }
};
