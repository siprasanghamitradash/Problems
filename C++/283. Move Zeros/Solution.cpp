class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        for(int i=n-1;i>=0;i--){
            if(nums[i] == 0){
                for(int j=i;j<n-1;j++){
                    int temp=nums[j+1];
                    nums[j+1] = nums[j];
                    nums[j] = temp;
                }
            }
        }
    }
};
