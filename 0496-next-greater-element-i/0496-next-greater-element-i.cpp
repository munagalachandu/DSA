class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        // Stack for next greater element
        stack<int> st;

        // Map to store next greater values
        unordered_map<int, int> mp;

        // Traverse nums2 from right to left
        for(int i = nums2.size() - 1; i >= 0; i--) {

            // Remove smaller elements
            while(!st.empty() && st.top() <= nums2[i]) {
                st.pop();
            }

            // If no greater element exists
            if(st.empty()) {
                mp[nums2[i]] = -1;
            }

            // Top is next greater element
            else {
                mp[nums2[i]] = st.top();
            }

            // Push current element
            st.push(nums2[i]);
        }

        // Store final answer
        vector<int> ans;

        // Get answers for nums1
        for(int i = 0; i < nums1.size(); i++) {
            ans.push_back(mp[nums1[i]]);
        }

        return ans;
    }
};