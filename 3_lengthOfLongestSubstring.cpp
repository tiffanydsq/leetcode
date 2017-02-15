class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> table(127,-1);
        int m=-1,l=0;
        for (int i=0;i<s.size();i++){
            m=max(table[s[i]],m);
            table[s[i]]=i;
            l=max(l,i-m);
        }
        return l;
    }
};