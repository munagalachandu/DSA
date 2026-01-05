class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        if (strs[0].empty()) return "";

        sort(strs.begin(), strs.end());
        string pref = strs[0];
        string last = strs[strs.size() - 1];
        string ans = "";

        int minl = min(pref.size(), last.size());

        for (int i = 0; i < minl; i++) {
            if (pref[i] != last[i])
                break;
            ans += pref[i];
        }

        return ans;
    }
};
