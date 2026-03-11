class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        int n = nums.size();
        if(n==0) return 0;

        set<int> s;

        for(int i : nums)
            s.insert(i);

        int res = 1;

        for(int i : s)
        {
            if(!s.count(i-1))
            {
                int curr = i;
                int cnt = 1;

                while(s.count(curr+1))
                {
                    curr++;
                    cnt++;
                }

                res = max(res,cnt);
            }
        }

        return res;
    }
};