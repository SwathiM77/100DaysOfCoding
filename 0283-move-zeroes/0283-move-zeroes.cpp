class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zero = -1;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 0){
                zero = i;
                break;
            }
        }
        if( zero == -1) return;
        for(int nonZero = zero + 1;nonZero < nums.size();nonZero++){
            if(nums[nonZero] != 0){
                swap(nums[zero++], nums[nonZero]);
            }
        }
    }
};