class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int i=0;
        int k=n-1;
        while(i<=k){
            if(nums[i]==val){
                swap(nums[i],nums[k]);
                k--;
            }else{
                i++;
            }
        }        
        return k+1;
    }
};