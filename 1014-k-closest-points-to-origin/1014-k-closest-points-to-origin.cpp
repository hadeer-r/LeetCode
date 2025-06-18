class Solution {
private:
    struct comp {
        bool operator()(pair<double,vector<int>> p1, pair<double,vector<int>> p2)const {
            return p1.first > p2.first;
        }
    };
public:

    
    
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<double,vector<int>>, vector<pair<double,vector<int>>>, comp> pp;
        vector<vector<int>> result;
        for(int i=0;i<points.size();i++){
            double distance = sqrt(pow(points[i][0],2)+pow(points[i][1],2));
            pp.push({distance,points[i]});
        }
        int i=0;
        while(!pp.empty()){
            if(i==k)break;
            i++;

            result.push_back(pp.top().second);
            pp.pop();
        }
        return result;
    }
};