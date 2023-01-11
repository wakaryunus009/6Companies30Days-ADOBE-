//Increasing Triplet Sequence
class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int len=nums.size();
        vector<int>leftMin(len,0),rightMax(len,0);
        leftMin[0]=nums[0];
        rightMax[len-1]=nums[len-1];
        for(int i=1;i<len;i++){
            leftMin[i]=min(leftMin[i-1],nums[i]);}  
        for(int i=len-2;i>=0;i--){
            rightMax[i]=max(rightMax[i+1],nums[i]);}
        for(int i=1;i<len-1;i++){
            if(nums[i]>leftMin[i-1] and nums[i]<rightMax[i+1]){
                return true;
            }
        }
        return false;
    }
    
};