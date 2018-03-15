class Solution {
    public int rangeBitwiseAnd(int m, int n) {
        int result = 0;
        int i, j, flag;
        for(i = 0; i < 32; i++){
            int tmp = 1 << i;
            for(j = m; j <= n && j > -1; j = nextTrial(j, tmp)){
                tmp &= j;
                if(tmp == 0){
                    break;
                }
            }
            if(tmp == 0 )
                continue;
            else{
                result += tmp;
            }
        }
        return result;
    }
    
    private int nextTrial(int j, int tmp){
        int i = 1;
        int trial = tmp;
        if(j == 2147483647)
            return -1;
        while(i < 31){
            if(((tmp << i) & j) == 0 && (tmp << i) != 0){
                trial = (j | (tmp << i)) & ~((tmp << i) - 1);
                return trial;
            }
            i++;
        }
        return 2147483647;
    }
}
