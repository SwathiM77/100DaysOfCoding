class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int temp = 0, prod = 0;
        for(int i=0;i<n;i++){
            temp = temp ^ i;
            prod = prod ^ nums[i];
        }
        temp = temp ^ n;
        return temp ^ prod;
    }
};