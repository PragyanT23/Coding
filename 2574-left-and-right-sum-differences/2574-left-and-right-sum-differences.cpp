class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>lesum(nums.size(),0);
        lesum[0]=0;
        vector<int>risum(nums.size(),0);
        risum[nums.size()-1]=0;
        for(int i=1;i<nums.size();i++){
            lesum[i]=lesum[i-1]+nums[i-1];
        }
        for(int i=nums.size()-2;i>=0;i--){
            risum[i]=risum[i+1]+nums[i+1];
        }
        for(int i=0;i<lesum.size();i++){
            nums[i]=abs(lesum[i]-risum[i]);
        }
        return nums;

    }
};