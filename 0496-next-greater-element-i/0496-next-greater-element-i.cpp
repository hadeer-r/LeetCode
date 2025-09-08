class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result(nums1.size());
        int n1 = nums1.size();
        int n2 = nums2.size();
        unordered_map<int, int> mp;
        stack<int> st;

        for (int i = n2 - 1; i >= 0; i--) {
            while (!st.empty() && nums2[st.top()] <= nums2[i]) {
                st.pop();
            }
            if (st.size()) {
                mp[nums2[i]] = nums2[st.top()];
            } else {
                mp[nums2[i]] = -1;
            }
            st.push(i);
        }

        for (int i = 0; i < n1; i++) {
            result[i] = mp[nums1[i]];
        }
        return result;
    }
};