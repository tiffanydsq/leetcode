class Solution {
public:
    int minDistance(string word1, string word2) {
        if(!word1.size()||!word2.size()) return max(word1.size(),word2.size());
        vector<vector<int>> step(word1.size()+1,vector<int> (word2.size()+1,0));
        for(int i=0;i<=word1.size();i++){
            for(int j=0;j<=word2.size();j++){
                if(i==0){
                    step[i][j]=j;
                }
                else if(j==0){
                    step[i][j]=i;
                }
                else if(word1[i-1]==word2[j-1]){
                    step[i][j]=step[i-1][j-1];
                }
                else{
                    step[i][j]=min(min(step[i-1][j-1]+1,step[i-1][j]+1),step[i][j-1]+1);
                }
            }
        }
        return step[word1.size()][word2.size()];
    }
};