class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
    int total=0;
    for( int num:nums)
    { total+=num;}
    int suml=0;
    for( int i=0;i<nums.size();i++)
    { if(suml==total-suml-nums[i])
    return i;
    suml+=nums[i];}return -1;}
};