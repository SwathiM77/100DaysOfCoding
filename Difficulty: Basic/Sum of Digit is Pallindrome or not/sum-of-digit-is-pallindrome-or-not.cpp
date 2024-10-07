//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  int reverse(int n){
      int rev = 0;
      while(n>0){
          rev = rev*10 + n%10;
          n = n/10;
      }
      return rev;
  }
    int isDigitSumPalindrome(int n) {
        // code here
        int sum = 0;
        while(n > 0){
            sum += n%10;
            n = n/10;
        }
        
        if(reverse(sum) == sum) return 1;
        return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isDigitSumPalindrome(N) << "\n";
    }
}

// } Driver Code Ends