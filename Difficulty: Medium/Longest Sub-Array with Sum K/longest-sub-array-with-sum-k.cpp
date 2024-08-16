//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    {
        map<long long,int>prefix;
        long long sum = 0;
        int maxLen = 0;
        for(int i=0;i<N;i++){
            sum += A[i];
            if(sum == K){
                maxLen = i+1;
            }
            int diff = sum - K;
            if(prefix.find(diff) != prefix.end()){
                maxLen = max(maxLen, i-prefix[diff]);
            }
            if(prefix.find(sum) == prefix.end()){
                prefix[sum] = i;
            }
        }
        return maxLen;
        // Complete the function
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends