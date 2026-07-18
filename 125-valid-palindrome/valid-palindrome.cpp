class Solution {
public:
    bool isPalindrome(string s) {
        string res = "";
        for(char ch : s){
            if(isalnum(ch)){
                res += tolower(ch);
            }
        }
        int n = res.length();
        int i = 0;
        int j = n-1;
        
        while(i<=j){
            if(res[i]!=res[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};