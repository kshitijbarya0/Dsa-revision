#include<bits/stdc++.h>
using namespace std;
vector<int>PSE(vector<int>&arr){
    int n = arr.size();
    vector<int>PS(n,0);
    stack<int>st;
    for(int i = 0; i<n; i++){
        while(!st.empty() && st.top()>=arr[i]){
            st.pop();
        }
        if(st.empty()){
            PS[i] = -1; 
        }else{
            PS[i] = st.top();
        }
        st.push(arr[i]);
    }
    return PS;
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
    vector<int>ans = PSE(arr);
    for(auto i: ans)cout<<i<<" ";
}