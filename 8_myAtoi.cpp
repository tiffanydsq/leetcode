class Solution {
public:
    int myAtoi(string str) {
        if(!str.size()) return 0;
        int res=0,sign=1,i=0;
        while(str[i]==' ') i++;
        if(str[i]=='+'){
            i++;
        }
        else if(str[i]=='-'){
            i++;
            sign=-1;
        }
        while(i<str.size()&&str[i]>='0'&&str[i]<='9'){
            if(res>INT_MAX/10||(res==INT_MAX/10&&str[i]>'7')){
                return sign==1?INT_MAX:INT_MIN;
            }
            res=res*10+str[i]-'0';
            i++;
        }
        return res*sign;
    }
};