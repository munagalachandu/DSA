class Solution {
public:
int ans;
void bt(int i, vector<int>&nums, int temp)
{   
       if( i==nums.size())
       { ans+=temp;
       return;}
       
       bt(i+1, nums, temp^nums[i]);
       bt(i+1, nums, temp);
         
         }

    int subsetXORSum(vector<int>& nums) {
        int temp=0;
        bt(0,nums,temp);
        return ans;
    }
};