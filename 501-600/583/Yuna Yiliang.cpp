class Solution {
public:
    string word11, word22;
    int ans[501][501];
    
    int cal(int i,int j) {
        if( i<0 || j<0 )
            return 0;
        if(ans[i][j]!=0)
            return ans[i][j];
        if(word11[i]==word22[j])
            ans[i][j]=1+cal(i-1,j-1);
        else 
            ans[i][j]=max(cal(i-1,j),cal(i,j-1));
        return ans[i][j];
    }
    
    int minDistance(string word1, string word2) {
        word11=word1;
        word22=word2;
        memset(ans,0,sizeof(ans));
        int max=0;
        for(int i = word1.length()-1; i>=0 ; i--){
            for(int j = word2.length()-1; j>=0; j--){
                if(max<cal(i,j))
                    max=cal(i,j);
            }
        }
        
        return word1.length()+word2.length()-max-max;
    }
};