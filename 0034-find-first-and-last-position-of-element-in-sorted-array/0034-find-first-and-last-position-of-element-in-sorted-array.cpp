class Solution {
public:
    int firstElement(vector<int>& nums, int target){
        int start = 0, end = nums.size()-1;
        int first = -1;
        int mid = start + (end - start)/2;
        while(start <= end){
            if(nums[mid] == target){
                first  = mid;
                end--;
            }
            else if(nums[mid] < target){
                start++;
            }
            else{
                end--;
            }
            mid = start + (end - start)/2;
        }
        return first;
    }
    int lastElement(vector<int>& nums, int target){
        int start = 0, end = nums.size()-1;
        int mid = start + (end - start)/2;
        int last = -1;
        while(start <= end){
            if(nums[mid] == target){
                last = mid;
                start++;
            }
            else if(nums[mid] < target){
                start++;
            }
            else{
                end--;
            }
            mid = start + (end - start)/2;
        }
        return last;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int start = 0, end = nums.size()-1;
        int mid = start + (end - start)/2;
        //int first = -1, last = -1;
        int first = firstElement(nums, target);
        int last = lastElement(nums, target);
        return {first,last};
    }
};