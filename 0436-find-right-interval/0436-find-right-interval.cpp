class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>> &intervals) {
        int sz=(int) intervals.size();
        vector<int> result(sz);
        map<int, int> save;
        for(int i=0;i<sz;i++){
            save[intervals[i][0]]=i+1;
        }
        
        for(int i=0;i<sz;i++){
            result[i]=save.lower_bound(intervals[i][1])->second-1;
            
        }
        return result;

    }
};