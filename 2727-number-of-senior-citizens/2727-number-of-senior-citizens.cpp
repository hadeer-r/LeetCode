class Solution {
public:
    int countSeniors(vector<string>& details) {
        int cnt{};
        for (int i = 0; i < (int)details.size(); i++) {
            if (details[i][11] - '0' > 6) {
                cnt++;
                continue;
            }
            if (details[i][11] - '0' == 6) {
                if (details[i][12] - '0' > 0)
                    cnt++;
            }
        }
        return cnt;
    }
};