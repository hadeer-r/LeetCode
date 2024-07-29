class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_map<string,int> words;
        for(int i=0;i<(int)emails.size();i++){
            string local{""};
            string domain{""};
            int k=0;
            
            for(;k<(int)emails[i].size();k++){
                if(emails[i][k]=='.')continue;
                if(emails[i][k]=='+'||emails[i][k]=='@')break;

                local+=emails[i][k];
            }

            if(emails[i][k]!='@'){
                for(;k<(int)emails[i].size();k++) if(emails[i][k]=='@')break;;
            }
            for(;k<(int)emails[i].size();k++){
                domain+=emails[i][k];
            }
            words[local+domain]++;
        }
        return words.size();
    }
};