class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0,maxsum=INT_MIN;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(i>=k-1){
                maxsum=max(maxsum,sum);
                sum-=nums[i-k+1];
            }
        }
        return double(maxsum)/k;
    }
};