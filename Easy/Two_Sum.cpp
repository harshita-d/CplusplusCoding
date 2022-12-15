class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         unordered_map<int, int>m;
         vector<int>res;
        for(int i = 0; i < nums.size(); i++){
            if(m.count(target - nums[i])) {
                res= {m[target - nums[i]], i};
                break;
            }
            m[nums[i]] = i;
        }
        return res;
    }
};