class Solution {
    private final int ALL = 128;
    
    private boolean[] array = new boolean[ALL];
        
    private int index(char c){
        return c;
    }
    
    private void init(){
        for(int i = 0; i < ALL; i ++){
            array[i] = false;
        }
    }
    
    private boolean exists(char c){
        if(array[index(c)])
            return true;
        else{
            array[index(c)] = true;
            return false;
        }
    }
    
    public int lengthOfLongestSubstring(String s) {
        int max = 0;
        int len = 1;
        int size = s.length();
        for(int i = 0; i < size; i++){
            init();
            len = 0;
            for(int j = i; j < size; j++){
                if(exists(s.charAt(j)))
                    break;
                else{
                    len++;
                }
            }
            if(len > max)
                max = len;
        }
        return max;
    }
}
