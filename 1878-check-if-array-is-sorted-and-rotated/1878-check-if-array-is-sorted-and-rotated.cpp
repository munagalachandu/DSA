class Solution {
public:
    bool check(vector<int>& nums) {
     vector<int> b= nums;
     sort(b.begin(),b.end());
     int n=nums.size();
    int x=0;
     
    for( int i=0;i<n;i++)
    { if( b[0]==nums[i])
    {x=i;
    bool ok=true;
    for( int j=0;j<n;j++)
    { if( b[j]!=nums[(j+x)%n])
    { ok=false;
     break;}}
     if (ok) return true;

    }
   } return false;
    }
    
};