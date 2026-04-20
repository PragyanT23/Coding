class Solution {
public:
    string removeOccurrences(string s, string part) {
        // string ans;
        // for(char c:s){
        //     ans+=c;
        //     if(ans.size()>=part.size()){
        //         int pos=ans.find(part);
        //         if(pos!=string::npos){
        //             ans.erase(pos,part.length());
        //         }
        //     }
        // }
        // return ans;
    while(s.find(part)!=string::npos){
                int pos=s.find(part);
                if(pos!=string::npos){
                    s.erase(pos,part.length());
                }
    }
            return s;
    }
};