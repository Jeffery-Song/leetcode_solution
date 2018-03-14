class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mp ;
        vector<int> res;
        for(int i=0; i<nums.size(); i++)
            mp[ nums[i] ] = i;
        
        for(int i=0; i<nums.size(); i++){
            int b = target - nums[i];
            if(mp.find(b)!=mp.end() && ((mp.find(b)->second)!= i)){
                res.push_back(i);
                res.push_back(mp.find(b)->second);
                return res;
            }
        }
        
        
    }
};