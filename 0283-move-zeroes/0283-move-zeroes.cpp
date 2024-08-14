class Solution {
public:
    void printArray(vector<int> arr){
        for(int i:arr){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    void moveZeroes(vector<int>& nums) {
        /*
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
            cout<<"nonZero = "<<nonZero<<" zero = "<<zero<<endl;
            printArray(nums);
        }
        */
        int zero = 0, nonZero = 0;
        int n = nums.size();
        while(zero < n && nonZero < n){
            //cout<<"Before, nonZero = "<<nonZero<<" zero = "<<zero<<endl;
            if(nums[nonZero] != 0){
                swap(nums[nonZero], nums[zero++]);
            }
            nonZero++;
            //cout<<"After, nonZero = "<<nonZero<<" zero = "<<zero<<endl;
            //printArray(nums);
        }
    }
};