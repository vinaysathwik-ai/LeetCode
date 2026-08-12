class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int> freq(128, 0);

        for(char c : s)
            freq[c]++;

        for(char c : t) {
            if(freq[c] == 0)
                return c;
            freq[c]--;
        }

        return '\0';
    }
};