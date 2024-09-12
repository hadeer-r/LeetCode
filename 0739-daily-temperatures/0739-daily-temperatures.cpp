class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temps) {
        vector<int> result((int)temps.size(),0);
        stack<pair<int, int>> idx;
        for (int i = 0; i < (int)temps.size(); i++) {
            while (!idx.empty() && temps[i] > idx.top().first) {
                result[idx.top().second]=i - idx.top().second;
                idx.pop();
            }
            idx.push({temps[i], i});
        }

        return result;
    }
};