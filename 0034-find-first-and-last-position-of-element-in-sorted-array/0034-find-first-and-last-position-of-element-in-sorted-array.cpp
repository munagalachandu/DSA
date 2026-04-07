class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n =nums.size();
        int low=0,high=n-1;
        int f=-1,l=-1;
        vector<int> res;
        
        
        while(low<=high)
        {
            int mid=low+(high-low)/2;
             if(target==nums[mid])
        {f=mid;
        high=mid-1;}
        else if(target<nums[mid])
        high=mid-1;
        else
        low=mid+1;}
         low=0, high=n-1;
        while(low<=high)
        { 
            int mid=low+(high-low)/2;
            if(target==nums[mid])
        {l=mid;
        low=mid+1;}
        else if(target<nums[mid])
        high=mid-1;
        else
        low=mid+1;}
        return {f,l};
        
    }
};