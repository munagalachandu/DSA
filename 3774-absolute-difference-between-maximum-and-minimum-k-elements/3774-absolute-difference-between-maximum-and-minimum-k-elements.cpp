class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        if(nums.size()==1)
        return 0;
        sort(nums.begin(),nums.end());
        int resb=0,ress=0;
    for( int i=0;i<k;i++)
        {    resb+=nums[i];
        }
        for( int i=nums.size()-k;i<nums.size();i++)
            ress+=nums[i];

        return abs(resb-ress);
        }
};