class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
     int maxc=0;
     int c=0;
     int n=nums.size();
   for(int i=0;i<n;i++)
{ if(nums[i]==1)
{c++;
maxc=std::max(maxc,c);}
else
c=0;}
return maxc;}
};