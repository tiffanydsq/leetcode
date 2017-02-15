class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> map;
        for(str:strs){
            string ostr=str;
            sort(str.begin(),str.end());
            if(map.find(str)==map.end()){
                vector<string> temp;
                temp.push_back(ostr);
                map[str]=temp;
            }
            else{
                map[str].push_back(ostr);
            }
        }
        vector<vector<string>> res;
        for(auto itm:map)
            res.push_back(itm.second);
        return res;
    }
};