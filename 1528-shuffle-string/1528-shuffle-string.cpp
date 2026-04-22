class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string u=s;
        for(int i=0;i<indices.size();i++){
            u[indices[i]]=s[i];
        }
        return u;
    }
};