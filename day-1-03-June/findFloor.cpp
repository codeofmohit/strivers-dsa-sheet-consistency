class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> v, long long n, long long x){
        
        // Your code here
        long long int left = 0;
        long long int right = n;
        
        if(v[0] > x) return -1;
        if(v[n - 1] < x)  return n - 1 ;
        
        while(left <= right){
            long long int mid = left + (right - left) / 2;
            
            if(v[mid] == x){
                return mid;
            }
            else if (v[mid] > x)
                right = mid - 1;
            else 
                left = mid + 1;
        }
        

        return right;
    }
};
