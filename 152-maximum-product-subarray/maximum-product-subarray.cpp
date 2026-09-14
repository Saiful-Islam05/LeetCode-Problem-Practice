class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxNum = nums[0],minNum = nums[0],ans=nums[0];

        for(int i=1;i<nums.size();i++)
        {
            int currNum = nums[i],currMax =nums[i]*maxNum,currMin = nums[i]*minNum;
            maxNum = max({currNum,currMax,currMin});
            minNum = min({currNum,currMax,currMin});
            ans = max(ans,maxNum);
        }

        return  ans;
    }
};