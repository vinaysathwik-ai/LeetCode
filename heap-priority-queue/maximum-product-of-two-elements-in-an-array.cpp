class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int on=(nums[nums.size()-1]-1)*(nums[nums.size()-2]-1);
        int to=(nums[0]-1)*(nums[1]-1);
        return max(on,to);
    }
};