//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int lenOfLongestSubarr(vector<int>& arr, int k) {
        int sum = 0, maxlen = 0;
        unordered_map<int,int>presum;
        for(int i=0;i<arr.size();i++){
            sum += arr[i];
            if(sum == k){
                maxlen = i+1;
            }
            int req = sum - k;
            if(presum.find(req) != presum.end()){
                maxlen = max(maxlen, i-presum[req]);
            }
            if(presum.find(sum) == presum.end()){
                presum[sum] = i;
            }
        }
        return maxlen;
        // code here
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int k;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> k;
        cin.ignore(); // Ignore newline character after k input

        Solution solution;
        cout << solution.lenOfLongestSubarr(arr, k) << "\n";
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends