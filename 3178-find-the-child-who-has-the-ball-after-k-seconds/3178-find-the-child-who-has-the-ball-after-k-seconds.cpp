class Solution {
public:
    int numberOfChild(int n, int k) {
       if(n==1)return 0;
       if(k<n)return k;
        int leftmoves=(2*(n-1));
        int left=k%leftmoves;
        return left>=n?leftmoves-left:left;
    }
};