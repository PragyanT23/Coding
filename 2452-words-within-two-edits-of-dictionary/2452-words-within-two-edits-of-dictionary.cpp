class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        vector<string>ans;
        for(int i=0;i<queries.size();i++){
            for(int j=0;j<dictionary.size();j++){
                int count=0;
                // for(char c:queries[i]){
                //     if(dictionary[j].find(c)==string::npos){
                //     count++;
                //     }
                // }
                string a=queries[i];
                string b=dictionary[j];
                for(int k=0;k<min(a.size(),b.size());k++){
                    if(a[k]!=b[k]){
                        count++;
                    }
                }
                
                if(count<=2){
                    ans.push_back(queries[i]);
                    break;
                }
            }
            
        }

    return ans;

    }
};