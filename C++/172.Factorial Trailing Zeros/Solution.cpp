class Solution {
public:
    int trailingZeroes(int n) {
        int c=0;
        int div = 5;
        while(n>0){
            c+=n/div;
            n/=div;
        }
        return c;
    }
};
