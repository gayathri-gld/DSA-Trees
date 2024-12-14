#include <iostream>
#include <vector>
#include <stack>
using namespace std;


vector <int> prevSmaller(vector<int> &A) {
    vector <int> ans;
    stack <int> st;
    for(int i = 0; i<A.size(); i++){
        while(!st.empty() && st.top() > A[i]){
            st.pop();
        }
        if(st.empty())
            ans.push_back(-1);
        else 
            ans[i] = st.top();
        st.push(ans[i]);
    }
    for(int num: ans){
        cout<<num;
    }
    return ans;
}

int main() {
    vector<int> A = {34, 35, 27, 42, 5, 28, 39, 20, 28};
    vector<int> result = prevSmaller(A);
    return 0;
}