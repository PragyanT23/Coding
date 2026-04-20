class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // int count=1,countt=0;
        // for(int i=1;i<nums.size();i++){
        //     if(nums[i]==nums[i-1]){count++;}
        //     if(nums[i]!=nums[i-1]){count=1;}
        //     if(count>2){
        //     countt++;
        //     count--;


        //     for(int j=i;j<nums.size()-1;j++){
        //         nums[j]=nums[j+1];
        //     }
        //     }
        // }
        // return nums.size()-countt;
        // int count=1,countt=0;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==nums[i-1]){
        //         count++;
        //     }
        //     if(count>2){
        //         index=i;
        //     }
        // }
        int k=2;
        if(nums.size()<=2)return nums.size();
        for(int i=2;i<nums.size();i++){
            if(nums[i]!=nums[k-2]){
                nums[k]=nums[i];
                k++;
            }
        }
        return k;
    }
};