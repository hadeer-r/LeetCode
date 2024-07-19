class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        vector<int> result;
        for (int i = 0; i < matrix.size(); i++) {
            int mini = INT_MAX;
            int k{0};
            int idx{0};
            for (; k < matrix[i].size(); k++) {
                if (mini > matrix[i][k])
                    mini = matrix[i][k], idx = k;
            }
            bool flag = true;
            for (int x = 0; x < matrix.size(); x++) {
                if (mini < matrix[x][idx]) {
                    flag = false;
                    break;
                }
            }
            if (flag)
                result.push_back(mini);
        }
        return result;
    }
};