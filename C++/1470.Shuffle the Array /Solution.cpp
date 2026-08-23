class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> arr(2*n);
        int j = 0;
        for(int i=0;i<n;i++){
            arr[j] = nums[i];
            arr[j+1] = nums[n+i];
            j+=2;
        }

        return arr;
    }
};
