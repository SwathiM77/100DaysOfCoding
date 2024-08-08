//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    void reverse(string &s){
        int start = 0, end = s.length()-1;
        while(start <= end){
            swap(s[start++], s[end--]);
        }
    }
    string reverseEqn (string s)
        {
            int n = s.length();
            string temp = "", res = "";
            for(int i=n-1;i>=0;i--){
                if(s[i] >= '0' && s[i] <= '9'){
                    temp += s[i];
                }
                else{
                    reverse(temp);
                    res += temp + s[i];
                    temp = "";
                }
            }
            if(temp != ""){
                reverse(temp);
                res += temp;
            }
            return res;
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
