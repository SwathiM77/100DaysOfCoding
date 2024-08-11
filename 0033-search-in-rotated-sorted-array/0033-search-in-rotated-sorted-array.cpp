class Solution {
public:
    int findPivot(vector<int>& nums){
        int start = 0, end = nums.size()-1;
        int mid = start + (end - start)/2;
        while(start < end){
            if(nums[mid] >= nums[0])
                start = mid + 1;
            else
                end = mid;
            mid = start + (end - start)/2;
        }
        // cout<<"Returning pivot= "<<mid<<endl;
        return mid;
    }
    
    int binarySearch(vector<int>& nums, int start, int end, int target)
    {
        int mid  = start + (end - start)/2;
        while(start <= end){
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] < target){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
            mid  = start + (end - start)/2;
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        int n = nums.size();
        // if(n == 1)
        // {
        //     if(nums[0] == target)
        //         return 0;
        //     else
        //         return -1;
        // }
        int pivot = findPivot(nums);
        if(nums[pivot] == target)
            return pivot;
        if((nums[pivot] <= target)  && (nums[n-1] >= target)){
            cout<<"2nd Line"<<endl;
            return binarySearch(nums, pivot, n-1, target);
        } 
        else{
        // if((nums[0] <= target) && (nums[pivot-1] >= target)){
            cout<<"1st Line"<<endl;
            return binarySearch(nums, 0, pivot-1, target);
        }
    }
};