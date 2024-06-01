class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<pair<int,int>> d;
        vector<int> ans;
        // for(int i=0;i<k;i++){
        //     while(!d.empty()&&nums[i]>=d.back().first){
        //         d.pop_back();
        //     }
        //     d.push_back({nums[i],i});
        // }
        // ans.push_back(d.front().first);
        for(int i=0;i<nums.size();i++){
            //ready
            while(!d.empty()&&d.front().second<=i-k){
                d.pop_front();
            }
            while(!d.empty()&&nums[i]>=d.back().first){
                d.pop_back();
            }
            d.push_back({nums[i],i});
            if(i>=k-1) ans.push_back(d.front().first);
        }
        return ans;
    }
};