class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s;
        
        int i, j;

        for(i=0;i<nums1.size();i++)
        {for(j=0;j<nums2.size();j++)
        {if(nums1[i]==nums2[j])
        s.insert(nums1[i]);

        }}
        vector<int> res(s.begin(),s.end());
        if(s.empty())
        return {};
        else
        return res;



    }
};