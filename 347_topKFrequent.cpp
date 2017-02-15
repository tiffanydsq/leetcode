class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> record;
        priority_queue<pair<int,int>> pq;
        vector<int> res;
        for(int num:nums){
            record[num]++;
        }
        
        for(auto itm:record){
            pq.push(make_pair(itm.second,itm.first)); //freq,num
            if(pq.size()> record.size()-k){
                res.push_back(pq.top().second);
                pq.pop();
            }
        }
        return res;
    }
};