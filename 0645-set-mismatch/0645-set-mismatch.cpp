class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
       map<int,int>m;
       vector<int>v;
        for(int n:nums)
        m[n]++;
        int rep,dup;
        int t=nums.size();
     for (int i = 1; i <= t; i++) {  
            if (m[i] == 2) rep=i;   
            if (m[i] == 0) dup=i;}   
            v.push_back(rep);
            v.push_back(dup);
return v;
    }
};