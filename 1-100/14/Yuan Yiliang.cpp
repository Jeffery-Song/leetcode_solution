class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res="";
        if(strs.size()==0 || strs[0].size()==0)
            return res;
        for(int i=0;i<strs[0].size();i++){
            char c=strs[0][i];
            for(int j=1;j<strs.size();j++){
                if(i==strs[j].size() || c!=strs[j][i])
                    return res;
            }
            res.push_back(c);
        }
        return res;
    
    }
};