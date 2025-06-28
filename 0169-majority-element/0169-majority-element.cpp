class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int n=nums.size();
        
        if (n==1)
        return nums[0];
        int max=-1;
        int elem=0;
int c=1;
        sort(nums.begin(),nums.end());
        for ( int i=0;i<n-1;i++)
        { if( nums[i]==nums[i+1])
        { c++;}
        else
        { c=1;}

        if (c>max)
        { max=c;
        elem= nums[i];}
        }
        return elem;
    }
};
// when we sort we get 66677 then if 6==6 then count 1