class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int cnt{1}, sz = (int)dist.size();
        vector<float> time;
        for (int i = 0; i < sz; i++) {
            time.push_back((float)dist[i] / speed[i]);
        }
        sort(time.begin(), time.end());
        for (int i = 1; i < sz; i++) {
            if (i < time[i])
                cnt++;

            else
                break;
        }
        return cnt;
    }
};