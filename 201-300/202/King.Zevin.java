class Solution {
    private final int FOREVER = 1000;
    public boolean isHappy(int n) {
        ArrayList<Integer> al;
        for(int i = 0; i < FOREVER; i++){
            if(n == 1)
                return true;
            al = decouple(n);
            n = squareSum(al);
        }        
        return false;
    }
    
    private ArrayList<Integer> decouple(int num){
        ArrayList<Integer> result =  new ArrayList<Integer>();
        while(num != 0){
            result.add(num % 10);
            num /= 10;
        }
        return result;
    }

    private int squareSum(ArrayList<Integer> nums){
        int sum = 0;
        for(int digit : nums){
            sum += digit * digit;
        }
        return sum;
    }
}
