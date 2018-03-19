class Solution {
public:
    bool IsCaps(char a) {
        if(a>='A' && a<='Z') 
            return true;
        else 
            return false;
    }
    
    int longestPalindrome(string s) {
        int l = s.size();
        int cap[30];
        int low[30];
        memset(cap,0,sizeof(cap));
        memset(low,0,sizeof(low));
        for(int i = 0 ; i < l ; i++) {
            if(IsCaps(s[i]))
                cap[ s[i]-'A' ]++;
            else
                low[ s[i]-'a' ]++;
        }
        
        int sum = 0;
        int one = 0;
        for(int i = 0 ; i < 26 ; i++) {
            if(cap[i]%2==1) {
                one = 1;
                sum += cap[i]-1;
            } else {
                sum += cap[i];
            }
                
            if(low[i]%2==1) {
                one = 1;
                sum += low[i]-1;
            } else {
                sum += low[i];
            }
        }
        sum += one;
        return sum;
    }
};