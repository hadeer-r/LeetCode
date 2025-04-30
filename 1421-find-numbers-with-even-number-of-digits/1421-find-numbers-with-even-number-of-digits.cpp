class Solution {
public:
    int count_digit(int num) {
        int c = 0;
        while (num) {
            num /= 10;
            c++;
        }
        return c;
    }
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (count_digit(nums[i]) % 2 == 0) {
                count++;
            }
        }
        return count;
    }
};