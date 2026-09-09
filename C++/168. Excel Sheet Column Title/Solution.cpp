class Solution {
public:
    string convertToTitle(int columnNumber) {
        int num = 64;
        int n = columnNumber;
        string res = "";
        while(n>26){
            int dig = n%26;
            if(dig==0){
                dig=26;
                n--;
            }
            char letter = num+dig;
            cout<<letter<<endl;
            n=n/26;
            res.push_back(letter);
        }
        char c = num+n;
        res.push_back(c);
         reverse(res.begin(),res.end());
        return res;
    }
};
