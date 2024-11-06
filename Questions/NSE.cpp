#include<bits/stdc++.h>
using namespace std;
vector<int>NS(vector<int>&arr){
    int n = arr.size();
    vector<int>NSE(n,0);
    stack<int>st;
    for(int i = n-1; i>=0; i--){
        // we are storing index 
        // if element then only st.top not arr[st.top()] and st.push(i)
        while(!st.empty() && arr[i]<=arr[st.top()]){
            st.pop();
        }
        if(st.empty()){
            NSE[i] = n;
        }else{
            NSE[i] = st.top();
        }
        st.push(i);
    }
    return NSE;
  
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
    vector<int>ans = NS(arr);
    for(auto i: ans)cout<<i<<" ";
}