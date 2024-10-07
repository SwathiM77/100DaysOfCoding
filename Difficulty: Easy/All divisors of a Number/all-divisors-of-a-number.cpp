//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void print_divisors(int n) {
        vector<int>vec;
        for(int i=1;i*i<=n;i++){
            if(n%i == 0){
                vec.push_back(i);
                if(i != (n/i))
                    vec.push_back(n/i);
            }
        }
        sort(vec.begin(), vec.end());
        for(int i:vec){
            cout<<i<<" ";
        }
        // Code here.
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        Solution ob;
        ob.print_divisors(n);
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends