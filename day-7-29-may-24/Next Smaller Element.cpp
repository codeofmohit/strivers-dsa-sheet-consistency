vector<int> Solution::prevSmaller(vector<int> &A) {
    stack<int> s;
    vector<int> ans;
    for(int a:A){
        while(!s.empty()&&s.top()>=a){
            s.pop();
        }
        if(s.empty()) ans.push_back(-1);
        else ans.push_back(s.top());
        s.push(a);
    }
    return ans;
}
