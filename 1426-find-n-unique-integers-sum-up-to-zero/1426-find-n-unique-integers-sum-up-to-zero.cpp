class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> result(n, 0);
        if (n == 1) {
            result[0] = 0;
            return result;
        }
        int side = n/2;

        int r=0,l=0;
        int i = n-1, cnt=0;
        while(cnt<side){
            result[cnt] = r -1;
            r--;
            cnt++;
            result[i] = l +1;
            l++;
            i--;
        }


        return result;

    }
};