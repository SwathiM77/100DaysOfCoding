//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
	public:
   	long long int prime_Sum(int n){
   	    // bool prime[1000000];
   	    // fill_n(prime, 1000000, true);
   	    vector<bool>prime(1000000, true);
   	    prime[0] = prime[1] = false;
   	    long long int sum = 0;
   	    for(int i=2;i*i<=n;i++){
   	        if(prime[i]){
   	            for(int j=i*i;j<=n;j+=i){
   	                prime[j] = false;
   	            }
   	        }
   	    }
   	    for(int i=0;i<=n;i++){
   	        if(prime[i]){
   	            sum += i;
   	            // cout<<"Sum = "<<sum<<endl;
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