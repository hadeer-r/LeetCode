class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>targets;

        for(int i=0;i<nums.size();i++){
            targets[nums[i]]=i;
        }

        vector<int> answer;
        for(int i=0;i<nums.size();i++){
            int y =target-nums[i];
            auto it = targets.find(y);
            if(it!=targets.end()){
                if(i==it->second) continue;
                answer.push_back(i);
                answer.push_back(it->second);
                break;
            }
        }
        return answer;
    }
};