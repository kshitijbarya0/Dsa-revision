#include<bits/stdc++.h>
using namespace std;
vector<int>NextGreaterElement(vector<int>&arr){
    int n = arr.size();
     vector<int>ans(n,0);
     stack<int>st;
     for(int i = arr.size()-1; i>=0; i--){
        while(!st.empty() && st.top()<arr[i]){
            st.pop();
        }
        if(st.empty()){
            ans[i] = -1;
        }else{
            ans[i] = st.top();
        }
         st.push(arr[i]);
     }

     return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr;
    for(int i = 0; i<n; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    vector<int>ans = NextGreaterElement(arr);
    for(auto i: ans)cout<<i<<" ";
}