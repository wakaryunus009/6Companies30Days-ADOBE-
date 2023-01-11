//Non Negative Integers without consecutive ones
class Solution {
    int z; // z = n;
    int ans = 1; // ans has an initial value of 1 because of the number 0 being a viable answer to all 1<=n<=1e9
    
    void dfs(int x, int lastBit) {
        if (x > z) return; // our current value is greater than n, stop traversing
        ++ans;  // viable value, increment ans
        if (lastBit == 0) dfs(x * 2 + 1, 1);
        dfs(x*2, 0);
    }
    
    
public:
    int findIntegers(int n) {
        z = n;
        dfs(1,1);
        return ans;
    }
};