class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
    int n=nums.size();
    vector<int> prefix(n);
    prefix[0]=nums[0];
    for( int i=1;i<n;i++)
    {prefix[i]=prefix[i-1]+nums[i]; }


   if(n==1)
   return 0;
   if(n==0)
   return -1;
  for (int i = 0; i < n; i++) {
            int leftSum = (i > 0) ? prefix[i-1] : 0;
            int rightSum = prefix[n-1] - prefix[i];
            if (leftSum == rightSum) return i;
        } return -1;}
};