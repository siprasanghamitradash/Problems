class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n =nums.size();
        if(n==3){
            return nums[0]*nums[1]*nums[2];
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
    int p1 = nums[n-1]*nums[n-2]*nums[n-3];
    int p2 = nums[n-1]*nums[0]*nums[1];
    if(p2>p1){
        return p2;
    }else{
        return p1;
    }
    }
};
