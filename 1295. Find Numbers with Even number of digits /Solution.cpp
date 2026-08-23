class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
        int c=0;
        for(int i=0;i<n;i++){
            int t = nums[i];
            int d = 0;
            while(t>0){
                d+=1;
                t/=10;
            }
            if(d%2==0){
                c+=1;
            }
        }
        return c;
    }
};
