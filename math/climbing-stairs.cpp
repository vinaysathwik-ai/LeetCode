class Solution {
public:
    int fibo(int n){
        vector<int> arr(n+1+3,0);
        arr[0]=0;
        arr[1]=1;
        for(int i=2;i<=n+1;i++){
            arr[i]=arr[i-1]+arr[i-2];
        }
        return arr[n+1];
    }
    int climbStairs(int n) {
        return fibo(n);
    }
};