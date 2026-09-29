class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mpp;
        for(const auto str : strs){
            vector<int>count(26,0);
            for(auto s : str){
                count[s-'a']++;
            }
            string key = to_string(count[0]);
            for(int i = 0 ; i < 26 ; i++){
                key += ',' + to_string(count[i]);
            }
            mpp[key].push_back(str);
        }
        vector<vector<string>>result;
        for(const auto &pair : mpp){
            result.push_back(pair.second);
        }
        return result;
    }
};
