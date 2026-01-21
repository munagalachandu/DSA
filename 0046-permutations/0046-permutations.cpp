class Solution {
public:
    vector<vector<int>> ans;
    void bt( vector<int> nums, int i, vector<int> temp)
    {    if( i==nums.size())
          {ans.push_back(temp);
          return;}

          for( int j=i;j<nums.size();j++)
          {swap(temp[i],temp[j]);
          bt( nums, i+1, temp);
          swap( temp[i], temp[j]);}
          }
    vector<vector<int>> permute(vector<int>& nums) {
      vector<int> temp=nums;
      bt(nums,0,temp);
      return ans;  

    }
};