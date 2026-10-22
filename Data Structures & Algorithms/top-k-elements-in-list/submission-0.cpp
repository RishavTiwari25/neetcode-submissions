class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       unordered_map<int,int>v;
       for(auto it : nums){
            v[it]++;
       }
       vector<pair<int,int>>mpp(v.begin(),v.end());
       sort(mpp.begin(),mpp.end() ,[](auto &a , auto &b){
        return a.second> b.second;
       });
       vector<int>result;
       for(int i = 0 ; i < k ; i++){
        result.push_back(mpp[i].first);
       }
        return result;
    }
};
