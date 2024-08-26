//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int resInd = -1;
        for(int i=0;i<n;i++){
            int known = 0;
            for(int j=0;j<m;j++){
                if(mat[i][j] != 0){
                    known = 1;
                    break;
                }
            }
            if(known == 0){
                resInd = i;
            }
        }
        
        if(resInd == -1) return resInd;
        
        for(int i=0;i<n;i++){
            if(resInd != -1 && i != resInd && mat[i][resInd] != 1){
                return -1;
            }
        }
        
        return resInd;
        // code here
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int> > M(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> M[i][j];
            }
        }
        Solution ob;
        cout << ob.celebrity(M) << endl;
    }
}

// } Driver Code Ends