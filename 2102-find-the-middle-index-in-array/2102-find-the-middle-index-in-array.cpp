class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
     for( int i=0;i<n;i++)
     { 
        int sumr=0,j=0,k=0,suml=0;
        for(j=0;j<i;j++)
     { sumr+=nums[j];}
     for( k=i+1;k<n;k++)
     { suml+=nums[k];}  
     if(sumr==suml)
     { return i;}}
     return -1;
    }
};