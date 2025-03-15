class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double av=0;
        int i;
        int n=nums.size();
        int w;
        for(i=0;i<k;i++)
        { w+=nums[i];}
        av=w;
        for(i=0; i<n-k;i++)
        { w+=nums[i+k]-nums[i];
        if(w>av)
        av=w;
        }
        return av/k;    
    }
};