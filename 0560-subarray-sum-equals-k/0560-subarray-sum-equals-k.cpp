class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int cnt = 0, sum = 0;
        map<int,int>presum;
        presum[0] = 1;
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
            int rem = sum - k;
            cnt += presum[rem];
            presum[sum]++;
        }
        return cnt;
    }
};