class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int low=0,high=0,len=0,maxlen=0;
        vector<int> visited(256,-1);
        for(high=0;high<s.size();high++){
            if(visited[s[high]]!=-1){
                low=max(low,visited[s[high]]+1);
            }
                visited[s[high]]=high;
                len=high-low+1;
                maxlen=max(maxlen,len);
            
        }
        return maxlen;
    }
};