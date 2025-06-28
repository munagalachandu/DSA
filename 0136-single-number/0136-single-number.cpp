class Solution {
public:
    int singleNumber(vector<int>& nums) {
       int n=nums.size();
       int sum=0;
       if(n==1)
       { return nums[0];}
       if (n%2==1)
       {   for(int i=0;i<n;i++)
       {  sum=sum^nums[i]; }   
               }
               return sum;
    }
};