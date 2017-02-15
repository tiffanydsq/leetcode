class Solution {
public:
    string longestPalindrome(string s) {
        if(!s.size()) return s;
        int len,a,b,lst=0,st=0;
        for(int i=0;i<s.size();i++){
            len=1;
            a=i;
            while(i+1<=s.size()-1&&s[i]==s[i+1]) {
                len++;
                i++;
            }
            b=i;
            while(a-1>=0&&b+1<=s.size()-1&&s[a-1]==s[b+1]){
                len+=2;
                a--;
                b++;
            }
            if (len>lst){
                lst=len;
                st=a;
            }
        }
        return s.substr(st,lst);
    }
};