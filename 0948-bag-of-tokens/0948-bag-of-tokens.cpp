class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        if(tokens.size()==0)return 0;
        if(tokens.size()==1){
            if(tokens[0]>power)return 0;
                return 1;
        }
        int i=0,j=tokens.size()-1;
        int count=0,maxx=INT_MIN;
        sort(tokens.begin(),tokens.end());
        if(tokens[0]>power)return 0;
        while(i<=j){
            if(tokens[i]<=power){
                while(i<tokens.size()&&power>=tokens[i]){
                maxx=max(maxx,++count);
                power-=(tokens[i]);
                i++;
            }
            }
            if(power<tokens[j]&&i<=j){
            power+=tokens[j];
            maxx=max(maxx,--count);
            j--;
            }
        }
        return maxx;
    }
};