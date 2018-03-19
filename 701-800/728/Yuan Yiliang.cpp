class Solution {
public:
    bool check(int i) {
        int tt=i;
        while(tt!=0) {
            int n=tt%10;
            tt/=10;
            if(n==0 || (i%n!=0))
                return false;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector <int> res;
        for(int i = left; i<=right; i++){
            if(check(i))
                res.push_back(i);
        }
        return res;
    }
};