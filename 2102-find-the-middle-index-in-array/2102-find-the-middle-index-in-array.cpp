class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
        int sumr=0,suml=0;
    
     for( int i=1;i<n;i++)
     { suml+=nums[i];
      }
     if(suml==sumr)
     return 0;
     
     for( int i=1;i<n;i++)
     { sumr+=nums[i-1];
     suml-=nums[i];
     if( suml==sumr)
     { return i;}}
     return -1;
       
    }
};