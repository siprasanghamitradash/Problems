class Solution {
public:
    bool isValid(string s) {
        std::stack<char> arr;
        int n = s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                arr.push(s[i]);
            }else {
                if(arr.empty()){
                    return false;
                }
                char last = arr.top();
                if (
                (s[i] == ')' && last != '(') ||
                (s[i] == ']' && last != '[') ||
                (s[i] == '}' && last != '{')){
                    return false;
                }
                arr.pop();
            }
        }
        return arr.empty();
    }
};
