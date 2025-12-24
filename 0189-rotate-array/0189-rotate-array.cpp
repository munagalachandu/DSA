class Solution {
public:
    void rotate(vector<int>& nums, int k) {
     int n = nums.size();
        if (n == 0 || k == 0) return;
        k = k % n; 
        int l1=0, r1=n-k-1;
        while(l1<r1)
        { swap(nums[l1++],nums[r1--]);}
        int l2=n-k, r2=n-1;
        while(l2<r2)
        {swap(nums[l2++],nums[r2--]);}
        int l3=0,r3=n-1;
        while(l3<r3)
        {swap(nums[l3++],nums[r3--]);}
        
  }


};