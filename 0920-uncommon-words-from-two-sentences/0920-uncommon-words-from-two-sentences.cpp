class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        stringstream sen1(s1);
        stringstream sen2(s2);

        unordered_map<string,int> words;
        string wr;
        while(sen1>>wr){
            words[wr]++;
        }
        while(sen2>>wr){
            words[wr]++;
        }

        vector<string> result;
        for(auto w : words){
            if(w.second==1){
                result.push_back(w.first);
            }
        }
        return result;
    }
};