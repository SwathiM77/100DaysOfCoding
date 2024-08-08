//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
	public:
	vector<bool> prepareSeive(int n){
	    vector<bool>seive(1000000, true);
	    seive[0] = seive[1] = false;
	    for(int i=2;i*i<=n;i++){
	        if(seive[i]){
	            for(int j=i*i;j<=n;j+=i){
	                seive[j] = false;
	            }
	        }
	    }
	    return seive;
	}
   	
   	long long int prime_Sum(int n){
   	    vector<bool>prime = prepareSeive(n);
   	    long long sum = 0;
   	    for(int i=0;i<=n;i++){
   	        if(prime[i]){
   	            sum += i;
                // cout<<i<<" ";   	            
   	        }
   	    }
   	    return sum;
   	    // Code here
   	}    
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		long long int ans = ob.prime_Sum(n);
		cout << ans <<"\n";
	}  
	return 0;
}
// } Driver Code Ends