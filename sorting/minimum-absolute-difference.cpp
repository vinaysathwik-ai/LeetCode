class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int mind=INT_MAX;
        for(int i=1;i<arr.size();i++)
        mind=min(mind,arr[i]-arr[i-1]);
        vector<vector<int>> res;
        for(int i=1;i<arr.size();i++){
            if(arr[i]-arr[i-1]==mind)
                res.push_back({arr[i-1],arr[i]});
        }
        return res;
    }
};