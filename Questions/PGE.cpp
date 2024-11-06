#include<bits/stdc++.h>
using namespace std;
vector<int>PGE(vector<int>&arr){
    int n = arr.size();
    vector<int>PSE(n,0);
    stack<int>st;
    for(int i = 0; i<n; i++){
         while(!st.empty() && arr[i]>st.top()){
            st.pop();
         }
         if(st.empty()){
            PSE[i] = -1;
         }else{
            PSE[i] = st.top();
         }
         st.push(arr[i]);
    }
    return PSE;
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
    vector<int>ans = PGE(arr);
    for(auto i: ans)cout<<i<<" ";
}