// class Solution {
// public:
//     vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
//         if ((int)names.size() == 1)
//             return names;
//         for (int i = 1; i < (int)names.size(); i++) {
//             for (int o = i; o > 0; o--) {
//                 if (heights[o] > heights[o - 1]) {
//                     swap(heights[o], heights[o - 1]);
//                     swap(names[o], names[o - 1]);
//                 } else
//                     break;
//             }
//         }
//         return names;
//     }
// };

// seconed solution
class Solution {
public:
    static bool cmp(pair<string,int> a,pair<string,int> b) {
        return a.second>b.second;
    }
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int sz=(int)names.size();
        if (sz == 1)
            return names;
        vector<pair<string,int>> sorting(sz);
        for(int i=0;i<sz;i++){
            sorting[i]= {names[i],heights[i]};
        }
        sort(sorting.begin(),sorting.end(),cmp);
        for(int i=0;i<sz;i++){
            names[i]=sorting[i].first;
        }
        return names;
    }
};