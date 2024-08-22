class Solution {
public:
    int ls(int a, vector<int> arr){
        for(int i:arr){
            if(i == a){
                return 1;
            }
        }
        return 0;
    }
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        //brute force
        /*
        int longest  = 1;
        for(int i=0;i<nums.size();i++){
            int cnt = 1;
            int temp = nums[i] + 1;
            while(ls(temp,nums)){
                cnt++;
                longest = max(longest, cnt); 
                temp += 1;
            }
        }
        return longest;
        */

        //better using sort

        int longest = 1, cnt = 0, lastSmall = INT_MIN;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(lastSmall == nums[i]-1){
                cnt++;
                lastSmall = nums[i];
            }
            else if(lastSmall != nums[i]){
                lastSmall = nums[i];
                cnt = 1;
        }
            longest = max(longest, cnt);    
        }
        return longest;
    }
};