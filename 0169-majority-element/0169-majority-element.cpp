class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int me=nums[0];
        int ct=1;
        for( int i=1;i<n;i++)
        {  if(nums[i]==me)
            ct++;
            else if( nums[i]!=me)
            {ct--;
            if( ct==0)
            {me=nums[i]; ct=1;}}}
            int cnt=0;
        for( int i =0;i<n;i++)
        { if (nums[i]==me)
             cnt++;   }
             if(cnt>n/2)
             return me;
         return -1;
        }

    
};