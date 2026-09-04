class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.size();
        int c = 0;
        int l = 0;
        int f=0;
        if(isupper(word[0])){
            c+=1;
            f=1;
        }else{
            l+=1;
        }
        for(int i=1;i<n;i++){
                if(isupper(word[i])){
                    c+=1;
                }else{
                    l+=1;
                }
            }
        if(c==n or l==n){
            return true;
        }else if(c==1 and f==1){
            return true;
        }
        return false;
    }
};
