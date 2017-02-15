class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> pres(num+1);
        pres[0]=0;
        for(int i=1;i<=num;i++){
            if(i%2==1) {
                pres[i]=pres[i-1]+1;
                
            }
            else{
                pres[i]=pres[i/2];
            }
        }
        return pres;
    }
};