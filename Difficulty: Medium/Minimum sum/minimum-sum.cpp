//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    string minSum(vector<int> &arr) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int i=n-1, j=n-2;
        string res;
        int carry = 0, temp = 0;
        while( i >= 0 && j >= 0){
            temp = carry + arr[i] + arr[j]; 
            res += to_string(temp%10);
            carry = temp/10;
            i -= 2;
            j -= 2;
        }
        while(i >= 0){
            temp = carry + arr[i];
            res += to_string(temp%10);
            carry = temp/10;
            i--;
        }
        while(j >= 0){
            temp = carry + arr[j];
            res += to_string(temp%10);
            carry = temp/10;
            j--;
        }
        if(carry){
            res += to_string(carry);
        }
        reverse(res.begin(), res.end());
        //cout<<"Result = "<<res<<endl;
        i = 0;
        while(i < res.length() && res[i] == '0' ){
            i++;
        }
        res.erase(0, i);
        return res;
        // code here
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        Solution ob;
        string ans = ob.minSum(a);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends