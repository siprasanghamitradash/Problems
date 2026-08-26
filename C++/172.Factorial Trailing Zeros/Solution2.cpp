class Solution {
public:
    int trailingZeroes(int n) {
        int c=0;
        int div = 5;
        while(n/div>0){
            c+=n/div;
            div*=5;
        }
        return c;
    }
};
