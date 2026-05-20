class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_map<int,int> mp;
        vector<int> arr;
        int count=0;
        for (int i=0;i<A.size();i++) 
        {
            int n1=A[i];
            int n2=B[i];
            mp[n1]++;
            mp[n2]++;
            if(mp[n1] >= 2)
                count++;
            if (n1 != n2) 
            {
                if (mp[n2] >= 2)
                    count++;
            }
            arr.push_back(count);
        }
        return arr;
    }
};