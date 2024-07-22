class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        if ((int)names.size() == 1)
            return names;
        for (int i = 1; i < (int)names.size(); i++) {
            for (int o = i; o > 0; o--) {
                if (heights[o] > heights[o - 1]) {
                    swap(heights[o], heights[o - 1]);
                    swap(names[o], names[o - 1]);
                } else
                    break;
            }
        }
        return names;
    }
};