class Solution {
public:
    int singleNumber(vector<int>& nums) {
       unordered_map<int,int> m;
       int res=0;
       for(int num:nums)
       m[num]++;
       for(auto it:m)
       {if(it.second==1)
        res=it.first;}
        return res;
    }
};