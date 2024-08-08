//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    void reverse(string &s, int start, int end){
        while(start <= end){
            swap(s[start++],s[end--]);
        }
        // cout<<"Reverse is "<<s<<endl;
    }
    string reverseEqn (string s)
        {
            reverse(s, 0, s.size()-1);
            int n = s.length();
            string rev = s, temp;
            // cout<<"Reverse = "<<rev<<endl;
            for(int i=0;i<n;i++){
                int j = i;
                while(j < n && s[j] >= '0' && s[j] <= '9'){
                    j++;
                }
                if( j > n) j--;
                // cout<<i<<" "<<j<<" ";
                if(i+1 < j) {
                    reverse(s, i, j-1);
                    i = j;
                }
                // cout<<endl;
            }
            return s;
            //code here.
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.reverseEqn (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends