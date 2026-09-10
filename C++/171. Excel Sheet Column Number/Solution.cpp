class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n = columnTitle.size();
        int res = 0;
        int ct=0;
        for(int i=n-1;i>=0;i--){
            char c = columnTitle[i];
            res+=(c-64)*(pow(26,ct));
            ct+=1;
        }
        return res;
    }
};
