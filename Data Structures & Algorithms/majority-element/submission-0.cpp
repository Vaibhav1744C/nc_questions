class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>m;//num , frequency
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(pair<int,int>p:m){
            if(p.second>n/2){
                return p.first;
            }
        }
        return -1;

    
    }
};