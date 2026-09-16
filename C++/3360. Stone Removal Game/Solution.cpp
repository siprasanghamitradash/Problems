class Solution {
public:
    bool canAliceWin(int n) {
        int a = 0;
        int diff = 10;
        while(diff<=n){
            n-=diff;
            a=!a;
            diff--;
        }
        return a;
    }
};
