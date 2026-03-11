class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort( nums.begin(),nums.end());
        int cnt=1;
        int res=1;
        if(nums.size()==0)
        { return 0;}
        if(nums.size()==1)
        return 1;
        for( int i =1;i<nums.size();i++)
        { if( nums[i]==nums[i-1]+1)
         cnt++;
         else if(nums[i]==nums[i-1])
         continue;
         else
         cnt=1;
         res=max(res,cnt);}
         return res;
    }
};