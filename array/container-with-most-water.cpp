class Solution {
public:
    int maxArea(vector<int>& height) {
        int curr_ar=0,max_ar=0,k;
        int left=0,right=height.size()-1;
        while(left<right){
            curr_ar=min(height[left],height[right])*(right-left);
            max_ar=max(curr_ar,max_ar);
            if(height[left]<height[right])
            left++;
            else
            right--;
        }
        return max_ar;
    }
};