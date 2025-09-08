class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> st;
        int n = nums.size();
        vector<int> res(n);
        int i = 0;
        while (1 == 1) {
            while (st.size() && nums[st.top()] <= nums[i]) {
                st.pop();
            }
            if (st.size()) {
                res[i] = nums[st.top()];
            } else {
                if (res[i] != 0)
                    break;
                res[i] = -1;
            }
            st.push(i);
            i--;
            if (i < 0)
                i = n - 1;
        }
        return res;
    }
};