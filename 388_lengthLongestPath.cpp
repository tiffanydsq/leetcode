class Solution {
public:
    int lengthLongestPath(string input) {
        vector<int> layer(100);
        int len=0,line=0,idx=1;
        bool isfile=false;
        for (int i=0;i<input.size();i++){
            while(input[i]=='\t'&&i<input.size()){
                i++;
                idx++;
            }
            while (input[i]!='\n'&&i<input.size()) {
                if(input[i]=='.') isfile=true;
                line++;
                i++;
            }
            
            
            if(isfile){
                len=max(len,layer[idx-1]+line);
            }
            else{
                layer[idx]=layer[idx-1]+line+1;
            }
            isfile=false;
            line=0;
            idx=1;
        }
        return len;
    }
};