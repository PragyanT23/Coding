class Solution {
public:
    long long countAlternatingSubarrays(vector<int>& nums) {
        int it=2;
        long long ans=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                ans+=it;
                it++;
            }
            else{
                ans+=1;
                it=2;
            }
        }
        return ans;
    }
};