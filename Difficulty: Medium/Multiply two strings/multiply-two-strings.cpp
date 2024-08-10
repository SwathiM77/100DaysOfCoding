//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
class Solution{
  public:
    /*You are required to complete below function */
    string multiplyStrings(string s1, string s2) {// Check if either of the numbers is zero
    if (s1 == "0" || s2 == "0") {
        return "0";
    }

    // Determine the sign of the result
    bool isNegative = false;
    if (s1[0] == '-') {
        isNegative = !isNegative;
        s1 = s1.substr(1);  // Remove the negative sign from s1
    }
    if (s2[0] == '-') {
        isNegative = !isNegative;
        s2 = s2.substr(1);  // Remove the negative sign from s2
    }

    // Remove leading zeros from the numbers
    while (s1.length() > 1 && s1[0] == '0') {
        s1.erase(0, 1);
    }
    while (s2.length() > 1 && s2[0] == '0') {
        s2.erase(0, 1);
    }

    // cout<<s1<<" "<<s2<<endl;
    // If after removing leading zeros, any string becomes empty, it means it's zero
    if (s1 == "0" || s2 == "0") {
        return "0";
    }

    // Initialize a result vector to store the product
    int n1 = s1.size();
    int n2 = s2.size();
    vector<int> result(n1 + n2, 0);

    // Multiply each digit of s1 with each digit of s2
    for (int i = n1 - 1; i >= 0; --i) {
        for (int j = n2 - 1; j >= 0; --j) {
            int mul = (s1[i] - '0') * (s2[j] - '0');
            int sum = mul + result[i + j + 1];

            result[i + j + 1] = sum % 10;
            result[i + j] += sum / 10;
        }
    }

    // Convert the result vector to a string
    string product = "";
    for (int i = 0; i < result.size(); ++i) {
        if (!(product.empty() && result[i] == 0)) {
            product += to_string(result[i]);
        }
    }

    // If the result is negative, add the negative sign
    if (isNegative) {
        product.insert(product.begin(), '-');
    }

    return product;
       //Your code here
    }

};

//{ Driver Code Starts.
 
int main() {
     
    int t;
    cin>>t;
    while(t--)
    {
    	string a;
    	string b;
    	cin>>a>>b;
    	Solution obj;
    	cout<<obj.multiplyStrings(a,b)<<endl;
    }
     
}
// } Driver Code Ends