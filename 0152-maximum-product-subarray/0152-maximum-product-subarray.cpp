class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prod = 1, ans = INT_MIN;
        for(int i=0;i<nums.size();i++){
            prod *= nums[i];
            ans = max(ans, prod);
            if(prod == 0) prod = 1; 
        }
        return ans;
    }
};