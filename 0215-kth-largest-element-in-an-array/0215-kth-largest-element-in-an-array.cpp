class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        if(nums.size()==1)
        return nums[0];
       priority_queue<int, vector<int>, greater <int>> minheap;
       
       for( int num:nums)
       { minheap.push(num);
       if (minheap.size()>k)
       { minheap.pop();}}
       return minheap.top();
    }
};