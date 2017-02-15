class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> map={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> substr;
        if(digits.size()==0) return substr;
        vector<string> res;
        if(digits.size()==1){
            for(auto c:map[digits[0]-'0'])
                res.push_back(string(1,c));
            return res;
        }
        string subdigits=digits.substr(1,digits.size()-1);
        substr=letterCombinations(subdigits);
        for(auto c:map[digits[0]-'0']){
            for(auto str:substr){
                res.push_back(c+str);
            }
        }
        return res;
    }
};