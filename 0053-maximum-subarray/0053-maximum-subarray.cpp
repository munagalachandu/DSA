class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int sum=nums[0],maxx=nums[0];
       int n=nums.size();
       for(int i=1;i<n;i++)
       {   maxx=max(nums[i]+maxx,nums[i]);
       sum=max(maxx,sum);      }
     return sum;  
    }
};