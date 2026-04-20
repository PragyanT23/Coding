class Solution {
public:
    bool divisorGame(int n) {
        int i=1;
        int turn=n;
        int count=0;
        while(i<=turn&&turn>0){
            turn-=i;
            count++;

        }
        if(count&1==1)return false;
        return true;
    }
};