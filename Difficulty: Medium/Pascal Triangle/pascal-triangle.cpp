//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
#define ll long long
class Solution{
public:
    ll ncr(ll n, ll r){
        ll res = 1;
        ll mod = 1000000007;
        for(ll int i=0;i<r;i++){
            res = res%mod * (n-i)%mod;
            res = res%mod /(i+1)%mod;
        }
        return res%mod;
    } 
    
    ll modInverse(ll a, ll m) {
        ll res = 1, y = m - 2;
        while (y > 0) {
            if (y % 2 == 1) res = res * a % m;
            a = a * a % m;
            y /= 2;
        }
        return res;
    }
    
    vector<long long> nthRowOfPascalTriangle(int n) {
        vector<ll>res;
        ll ans = 1;
        res.push_back(ans);
        ll int mod = 1000000007;
        for(ll i=1;i<n;i++){
            //res.push_back(ncr(n-1,i-1));
            ans = ans%mod * (n-i)%mod;
            ans = ans * modInverse(i, mod) % mod;
            res.push_back(ans);
        }
        return res;
        // code here
    }
};


//{ Driver Code Starts.


void printAns(vector<long long> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.nthRowOfPascalTriangle(n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends