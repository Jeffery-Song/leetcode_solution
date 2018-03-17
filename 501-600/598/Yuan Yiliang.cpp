class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int all_op=ops.size();
        if(all_op==0)
            return m*n;
        int min1=40005,min2=40005;
        for(int i=0;i<all_op;i++){
            min1=(min1<ops[i][0])?min1:ops[i][0];
            min2=(min2<ops[i][1])?min2:ops[i][1];
        }
        return min1*min2;
    }
    
};