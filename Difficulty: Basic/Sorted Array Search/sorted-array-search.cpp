//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searched
    int searchInSorted(int arr[], int N, int K) {
        //linear Search
        /*
        for(int i =0;i<N;i++){
            if(arr[i] == K){
                return 1;
            }
        }
        return -1;
        */
        
        //Binary Search
        int start = 0, end = N-1;
        int mid = start + (end - start)/2;
        
        while(start <= end){
            if(arr[mid] == K)
                return 1;
            if(arr[mid] < K){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
            mid = start + (end - start)/2;
        }
        return -1;
        // Your code here
    }
};

//{ Driver Code Starts.

int main(void) {

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        int arr[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution ob;
        cout << ob.searchInSorted(arr, n, k) << endl;
    }

    return 0;
}

// } Driver Code Ends