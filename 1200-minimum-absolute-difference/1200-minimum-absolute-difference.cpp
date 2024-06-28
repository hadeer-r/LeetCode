class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> result;
        sort(arr.begin(),arr.end());
        int min_diff=INT_MAX;
        for(int i=1;i<(int)arr.size();i++){
            if(min_diff>arr[i]-arr[i-1])
            min_diff=arr[i]-arr[i-1];
        }
        for(int i=1;i<(int)arr.size();i++){
            if(min_diff==arr[i]-arr[i-1]){
                result.push_back({arr[i-1],arr[i]});
            }
        }
        return result;
    }
};