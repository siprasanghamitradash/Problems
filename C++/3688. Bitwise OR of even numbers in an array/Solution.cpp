class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& nums) {
        int n=nums.size();
        int c=0;
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                c=c|nums[i];
            }
        }
        return c;
    }
};
