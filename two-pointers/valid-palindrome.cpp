class Solution {
public:
    bool isPalindrome(string s) {
        erase_if(s, [](unsigned char c) { 
        return !isalnum(c); 
        });
        transform(s.begin(), s.end(), s.begin(), [](unsigned char c) {
            return tolower(c);
        });
        int low=0,high=s.size()-1;
        while(low<high){
            if(s[low]!=s[high])
            return false;
            low++;
            high--;
        }
        return true;
    }
};