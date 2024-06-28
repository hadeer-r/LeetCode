class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int cnt{1},sz=(int)dist.size();
        for(int i=0;i<sz;i++) {
            int time=(dist[i]/speed[i]);
            if(dist[i]%speed[i]!=0&&dist[i]>speed[i])
                time++;
            dist[i]=time;

        }
        sort(dist.begin(),dist.end());
        for(int i=1;i<sz;i++) {
            if(i<dist[i])
                cnt++;
            else
                break;

        }
        return cnt;
    }
};