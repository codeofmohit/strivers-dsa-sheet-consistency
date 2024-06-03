// https://www.geeksforgeeks.org/problems/ceil-the-floor2802/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=ceil-the-floor

#include <bits/stdc++.h>

using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x);

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
        auto ans = getFloorAndCeil(arr, n, x);
        cout << ans.first << " " << ans.second << "\n";
    }
    return 0;
}

pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    // code here
    sort(arr,arr + n);
    int left = 0;
    int right = n -1;
    
    if(arr[0] > x)
        return {-1,arr[0]};
    if(arr[n-1] < x)
        return {arr[n-1],-1};

    while(left <= right ){
        int mid = (left + right) >> 1;
        
        if(arr[mid] == x)
            return {x,x};
        else if(arr[mid] < x)
             left = mid + 1;
        else 
            right = mid - 1;
    }
    
    return {arr[right],arr[left]};
}
