class Solution {
public:
    static bool cmp(pair<int,int> a,pair<int,int> b){
        return a.second<b.second;
    }
    int search(vector<pair<int,int>> &v,int target){
        int start=0,end=(int)v.size()-1;
        pair<int,int> res{-1,INT_MAX};
        while (start<=end){
            int middle=start+(end-start)/2;
            if(v[middle].second==target)
                return v[middle].first;
            if(v[middle].second>target){
                if(res.second>v[middle].second)
                    res={v[middle].first,v[middle].second};
                end =middle-1;
            }
            else
                start=middle+1;

        }
        return res.first;
    }
    vector<int> findRightInterval(vector<vector<int>> &intervals) {
        int sz=(int)intervals.size();
        vector<int> result(sz);
        vector<pair<int,int>> save(sz);
        for(int i=0;i<sz;i++){
            save[i]={i,intervals[i][0]};
        }
        sort(save.begin(),save.end(),cmp);
        for(int i=0;i<sz;i++){
            result[i]= search(save,intervals[i][1]);
        }
        return result;
    }
};