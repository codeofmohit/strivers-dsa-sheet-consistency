#include <bits/stdc++.h>
using namespace std;
void sortStack(stack<int> &s){
	stack<int> s1;
	while(!s.empty()){
		int a=s.top();
		s.pop();
		while(!s1.empty()&&s1.top()>a){
			int b= s1.top(); s1.pop(); s.push(b);
		}
		s1.push(a);
	}
	while(!s1.empty()){
		int a= s1.top(); s1.pop(); s.push(a);
	}
}
