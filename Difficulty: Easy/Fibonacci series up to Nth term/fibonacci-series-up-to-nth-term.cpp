//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> Series(int n) {
        vector<int>res;
        vector<int>fibac(n+1);
        long long int mod = 1000000007;
        fibac[0] = 0;
        fibac[1] = 1; 
        for(int i=2;i<=n;i++){
            fibac[i] = fibac[i-1]%mod + fibac[i-2]%mod;
        }
        for(int i=0;i<=n;i++){
            res.push_back(fibac[i]%mod);
        }
        return res;
        // Code here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;

        vector<int> ans = obj.Series(n);
        for (auto x : ans) cout << x << " ";
        cout << "\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends