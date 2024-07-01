class Solution {
public:
    int find_first(vector<int> &v, int target) {
        int left = 0, right = (int)v.size() - 1;
        while (left <= right) {
            int middle = left + (right - left) / 2;
            if (v[middle] == target) {
                if (middle == 0 || v[middle - 1] != target)
                    return middle;
                else
                    right = middle - 1;
            } else if (target > v[middle])
                left = middle + 1;
            else if (target < v[middle])
                right = middle - 1;
        }
        return -1;
    }
    int find_last(vector<int> &v, int target) {
        int left = 0, right = (int)v.size() - 1;
        while (left <= right) {
            int middle = left + (right - left) / 2;
            if (v[middle] == target) {
                if (middle == (int)v.size() - 1 || v[middle + 1] != target)
                    return middle;
                else
                    left = middle + 1;
            } else if (target > v[middle])
                left = middle + 1;
            else if (target < v[middle])
                right = middle - 1;
        }
        return -1;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()==0)
        if (nums.size() == 1) {
            if (nums[0] == target)
                return {0, 0};
            else
                return {-1, -1};
        }
        sort(nums.begin(), nums.end());
        return {find_first(nums, target), find_last(nums, target)};
    }
};