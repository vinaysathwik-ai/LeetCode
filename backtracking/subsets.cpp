class Solution {
public:
    void subset(vector<int>&nums,vector<int>&curr,int idx,vector<vector<int>>& result){
        if(idx==nums.size()){
            result.push_back(curr);
            return;
        }
        subset(nums,curr,idx+1,result);
        curr.push_back(nums[idx]);
        subset(nums,curr,idx+1,result);
        curr.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> curr;
        subset(nums,curr,0,res);
        return res;
    }
};