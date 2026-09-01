class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        while(n>0 and s[n-1]==' '){
            n--;
        }
        int c=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]==' '){
                break;
            }else{
                c++;
            }
        }
        return c;
    }
};
