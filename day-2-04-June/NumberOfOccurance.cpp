// https://www.geeksforgeeks.org/problems/number-of-occurrence2259/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=number-of-occurrence

//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int k) {
	    // code here
        int ans = 0;
        
        if(arr[0] > k || arr[n - 1] < k)
            return ans;
    
        int left = 0 , right = n-1;
        int tempR = 0 , tempL = 0;
    
        while(left <= right){
            int mid = left + (right - left )/2;
    
            if(arr[mid] == k){
                tempR = mid;
                right =  mid -1;
            }
            else if ( arr[mid] > k)
                right = mid -1;
            else
                left = mid + 1;
        }
        
        
        right = n - 1;
    
        while(left <= right){
            int mid = left + (right - left )/2;
    
            if(arr[mid] == k){
                tempL = mid;
                left =  mid  + 1;
            }
            else if ( arr[mid] > k)
                right = mid -1;
            else
                left = mid + 1;
        }
        
        if(tempR == 0 && tempL == 0 && n > 2)
            return 0;
            
        ans = tempL - tempR;
    
        return ans + 1; 
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends
