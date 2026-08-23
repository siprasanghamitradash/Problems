class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(m==0){
            for(int i=0;i<n;i++){
                nums1[i]=nums2[i];
            }
        }
        int t = m+n-1;
        int i = m;
        int j = n;
        while(i!=0 and j!=0){
            if(nums1[i-1]>=nums2[j-1]){
                nums1[t] = nums1[i-1];
                t-=1;
                i-=1;
            }else if(nums1[i-1]<nums2[j-1]){
                nums1[t] = nums2[j-1];
                t-=1;
                j-=1;
            }
        }
            while(j!=0){
                nums1[t]=nums2[j-1];
                t-=1;
                j-=1;
            }
        
    }
};
