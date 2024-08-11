class Solution {
public:
    int findPivot(vector<int>nums){
        int start = 0, end = nums.size()-1;
        int mid = start + (end - start)/2;
        while(start<end){
            if(nums[mid] >= nums[0]){
                start = mid + 1;
            }
            else{
                end = mid;
            }
            mid = start + (end - start)/2;
        }
        return mid;
    }
    int binarySearch(vector<int>arr, int start, int end, int target){
        int mid = start + (end - start)/2;
        while(start<=end){
            if(arr[mid] == target){
                return mid;
            }
            if(arr[mid] < target){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            } 
            mid = start + (end - start)/2;
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        int pivot = findPivot(nums);
        cout<<"Pivot = "<<pivot<<endl;
        if(nums[target] >= nums[0] && nums[target] <= nums[pivot]){
            return binarySearch(nums, 0, pivot-1, target);
        }
        else{
            return binarySearch(nums, pivot, nums.size()-1, target);
        }
        return -1;
    }
};