class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set<int>s;
        for (int num : nums) {
            s.insert(num);
        }
        int maxlen=0;
        for(int num:nums){
            if(s.count(num-1)){
                continue;
            }
            int curr=num;
            int len=1;
            while(s.count(curr+1)){
                curr++;
                len+=1;
                
            }
            maxlen=max(len,maxlen);
        }
        return maxlen;


    
        
    }
};
