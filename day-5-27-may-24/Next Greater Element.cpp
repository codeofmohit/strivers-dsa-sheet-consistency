class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int,int> m;
        int n= nums2.size();
        for(int i=0;i<n;i++){
            m[nums2[i]]=i;
        }
        vector<int> nge(n);
        for(int i=0;i<n;i++){
            nge[i]=-1;
        }
        stack<int>s;
        for(int i=0;i<n;i++){
            while(!s.empty()&&nums2[s.top()]<nums2[i]){
                int ind=s.top();
                nge[ind]=nums2[i];
                s.pop();
            }
            s.push(i);
        }
        for(int i=0;i<nums1.size();i++){
            ans.push_back(nge[m[nums1[i]]]);
        }
        return ans;
    }
};