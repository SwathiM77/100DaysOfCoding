class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0, n = nums.size();
        for(int i=1;i<=n;i++){
            if(nums[i%n] < nums[(i-1)%n]){
                count++;
            }
        }
        return count<=1;
    }
};