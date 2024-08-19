class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<long long,int> map; 
        for(int i=0;i<nums.size();i++){
            map[nums[i]]++;
        }
        int maxi = -1, ans = 0;
        for(auto i: map){
            if( maxi < i.second){
                ans = i.first;
                maxi = i.second;
            }
        }
        return ans;
    }
};