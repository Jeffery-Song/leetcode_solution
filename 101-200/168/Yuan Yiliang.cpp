class Solution {
public:
    string convertToTitle(int n) {
        stack <char> ss;
        string res="";
        while(n>0){
            int tmp = (n-1)%26;
            ss.push('A'+tmp);
            tmp++;
            n = (n-1)/26;
        }
        
        while(!ss.empty()){
            res+=ss.top();
            ss.pop();
        }
        
        return res;
    }
};