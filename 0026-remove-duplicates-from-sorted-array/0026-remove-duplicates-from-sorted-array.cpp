class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ind = 0, i = 0, n = nums.size();
        if(n == 1) return 1;
        while(ind < n && i < n){
            while(ind < n -1 && nums[ind] == nums[ind+1]){
                ind++;
            }
            nums[i++] = nums[ind++];
        }
        return i;
    }
};