class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int mid = 0;
        int high = n-1;
        while(mid<=high){
            if(nums[mid]==2){
                int temp = nums[high];
                nums[high] = nums[mid];
                nums[mid] = temp;
                high-=1;
            }else if(nums[mid]==0){
                int temp = nums[low];
                nums[low] = nums[mid];
                nums[mid] = temp;
                mid+=1;
                low+=1;
            }else{
                mid+=1;
            }
    }
    }
};
