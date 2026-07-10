class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>m;//num and idx
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            int need=target-nums[i];
            if(m.count(need)){
                ans.push_back(m[need]);
                ans.push_back(i);
                
            }else{
                m[nums[i]]=i;
            }
        }
        return ans;
    }
};
