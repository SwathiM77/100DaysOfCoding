class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long int sum = 0, ans = -1000000000000000000;
        for(int i:nums){
            sum += i;
            ans = max(sum, ans);
            if( sum < 0) sum = 0;
            cout<<ans<<endl;
        }
        return ans;
    }
};