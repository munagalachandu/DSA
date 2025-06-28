class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
     vector<int> pos,neg;
    int n=nums.size();
    if(n==0||n==1)
    return nums;
    
     for(int i=0;i<nums.size();i++)
     { if( nums[i]>0)
      pos.push_back(nums[i]);
      else 
      neg.push_back(nums[i]);}
      vector<int> final;
      for(int j=0;j<n/2;j++)
      { final.push_back(pos[j]);
      final.push_back(neg[j]);}
      return final;

    }
};