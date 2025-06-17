class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        if((int)nums1.size()==0) return result;
        unordered_map<int,int> numsG;
        stack<int> st;

        for(int i=0;i<nums2.size();i++){
            while(!st.empty()){
                if(nums2[i]>st.top()){
                    numsG.insert({st.top(),nums2[i]});
                    st.pop();
                }
                else break;
            }
            st.push(nums2[i]);
        }
        while(!st.empty()){
            numsG.insert({st.top(),-1});
            st.pop();
        }
        for(int i = 0;i<nums1.size();i++){
            result.push_back(numsG[nums1[i]]);
        }
        return result;
    }
};