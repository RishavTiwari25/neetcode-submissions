class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long product = 1;
        int zerocount = 0;
        for(int i = 0 ; i < nums.size(); i++){
            if(nums[i]!= 0){
                product = nums[i]*product;
            }
            if(nums[i] == 0)zerocount++;
        }
        vector<int>result;
        for(int i = 0 ; i < nums.size() ; i++){
            if(zerocount > 1 ){
                result.push_back(0);
                continue;
            }
            if(zerocount == 0){
                result.push_back(product/nums[i]);
                continue;
            }
            if(zerocount == 1){
                if(nums[i] == 0){
                    result.push_back(product);
                }else {
                    result.push_back(0);
                }
            }
        }
        return result;
    }
};
