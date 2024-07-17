class Solution {
public:
    vector<int> search(vector<vector<int>> &v, int target) {
        int start = 0, end = (int) v.size() - 1;

        while (start <= end) {
            int middle = start + (end - start) / 2;
            if (v[middle][0] == target)
                return v[middle];
            if(v[middle][0]>target&& middle!=0&&v[middle-1][0]<target)
                return v[middle];
            else if(v[middle][0]>target)
                end =middle-1;
            else
                start=middle+1;
        }
        return {-1,-1,-1};
    }
    static bool cmp(vector<int> a,vector<int> b){
        return a[0]<b[0];
    }

    vector<int> findRightInterval(vector<vector<int>> &intervals) {// time O(n*log(n)), memmory O(n)

        vector<vector<int>>temp=intervals;
        vector<int> result;
        unordered_map<int,int> interval_idx;
        for(int i=0;i<(int) intervals.size();i++){
            interval_idx[intervals[i][0]]=i;
        }
        sort(intervals.begin(),intervals.end(),cmp);
        for(int i=0;i<(int) temp.size();i++) {
            vector<int> found= search(intervals,temp[i][1]);
            if(found.size()==3)
            result.push_back(-1);
            else result.push_back(interval_idx[found[0]]);
        }
        return result;

    }
};