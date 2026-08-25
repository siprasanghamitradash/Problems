class Solution {
public:
    void sortColors(vector<int>& arr) {
        int n = arr.size();
        for(int j=0;j<n;j++){
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            int temp= arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=temp;
        }
    }}
    }
};
