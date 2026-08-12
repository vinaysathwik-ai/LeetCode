class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();

        vector<int> count(n + 2, 0);

        for(int x : nums) {
            if(x > 0 && x <= n)
                count[x] = 1;
        }

        for(int i = 1; i <= n; i++) {
            if(count[i] == 0)
                return i;
        }

        return n + 1;
    }
};