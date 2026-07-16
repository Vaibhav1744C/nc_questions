class Solution {
public:
    void heapify(int i,vector<int>&nums,int n){
        int max=i;
        int l=2*i+1;
        int r=2*i+2;

        if(l<n && nums[l]>nums[max]){
            max=l;
        }
        if(r<n && nums[r]>nums[max]){
            max=r;
        }

        if(max!=i){
            swap(nums[max],nums[i]);
            heapify(max,nums,n);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        int n=nums.size();
        for(int i=n/2-1;i>=0;i--){
            heapify(i,nums,n);
        }
        for(int i=n-1;i>0;i--){
            swap(nums[0],nums[i]);
            heapify(0,nums,i);
        }
        return nums;
    }
};