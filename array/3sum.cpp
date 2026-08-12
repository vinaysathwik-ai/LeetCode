class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> result;
        int low,high,sum;
        for(int i=0;i<nums.size()-2;i++){
            if(i>0&&nums[i]==nums[i-1])
            continue;
            low=i+1;
            high=nums.size()-1;
            while(low<high){
                sum=nums[low]+nums[high]+nums[i];
                if(sum==0){
                    result.push_back({nums[i],nums[low],nums[high]});
                    low++;
                    high--;
                    while(low < high && nums[low] == nums[low-1])
                low++;

            while(low < high && nums[high] == nums[high+1])
                high--;
                }    
                else if(sum<0){
                    low++;
                }
                else
                high--;
            }
        }
        return result;
    }
};