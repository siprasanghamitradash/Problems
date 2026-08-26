class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            nums[i]*=nums[i];
        }
        for(int i=1;i<n;i++){
        int ele = nums[i];
        int j = i-1;
        while(j>=0 and nums[j]>ele){
            nums[j+1] = nums[j];
            j--;
        }
        nums[j+1]=ele;
    }
    return nums;
    }
};
