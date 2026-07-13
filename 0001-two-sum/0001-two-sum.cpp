class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i=0;
        int j=i+1;
       
        while(i<nums.size()){ 
            if(nums[i]+nums[j]==target){
                return {i,j};
            }
            j++;
        if(j==nums.size()){
            i++;j=i+1;}
        }
    
    return {-1,-1};
    }
};