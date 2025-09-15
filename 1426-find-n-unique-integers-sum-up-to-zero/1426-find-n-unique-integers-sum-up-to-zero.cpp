class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> result;
        if (n == 1) {
            result.push_back(0);
            return result;
        }
        int side = n/2;

        int currentNum = 1;
        if(n&1){
            result.push_back(0);
        }
        for(int i = 0;i<n/2;i++){
            result.push_back(currentNum*-1);
            result.push_back(currentNum);
            currentNum++;
        }

        return result;

    }
};