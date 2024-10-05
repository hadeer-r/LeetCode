class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() == 1) return 0;

        int minPr = prices[0];
        int maxProf{};

        for(int i=0;i<prices.size();i++){
            maxProf= max(maxProf,prices[i]-minPr);
            minPr=min(minPr,prices[i]);
        }
        return maxProf;
    }
};