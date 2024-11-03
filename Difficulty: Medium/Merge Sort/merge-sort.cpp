//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void merge(vector<int>&arr, int l, int mid, int r){
        int i=l, j=mid+1;
        vector<int>res;
        while(i<=mid && j<=r){
            if(arr[i] < arr[j]){
                res.push_back(arr[i++]);
            }
            else{
                res.push_back(arr[j++]);
            }
        }
        while(i<=mid){
            res.push_back(arr[i++]);
        }
        while(j<=r){
            res.push_back(arr[j++]);
        }
        for(int i=l;i<=r;i++){
            arr[i] = res[i-l];
        }
    }
    void mergeSort(vector<int>& arr, int l, int r) {
        // code here
        if(l >= r) return;
        
        int mid = (l+r)/2;
        
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, r);
        
        merge(arr, l, mid, r);
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        obj.mergeSort(arr, 0, arr.size() - 1);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends