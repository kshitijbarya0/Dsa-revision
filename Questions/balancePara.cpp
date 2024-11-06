#include<bits/stdc++.h>
using namespace std;
bool isbalanced(string s){
    stack<char>st;
    for(int i = 0; i<s.size(); i++){
         if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            st.push(s[i]);
         }else {
            if(st.empty())return false;
            char ch = st.top();
            st.pop();
            if((ch == '(' && s[i] == ')') || (ch == '{' && s[i] == '}') || (ch == '[' && s[i] == ']'))return true;
            else return false;
         }
    }
    return s.empty();
}
int main(){
    string s;
    cin>>s;
    bool ans = isbalanced(s);
    cout<<ans;
}