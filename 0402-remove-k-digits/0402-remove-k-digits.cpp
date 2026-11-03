class Solution {
public:
    string removeKdigits(string s, int k) {

       stack<char> st;

       st.push(s[0]);

       int i=1;

       //Monotoic Stack

       while(i<s.size() ){

        while(!st.empty() && s[i]<st.top()  && k>0){
            st.pop(); k--;
        }

        st.push(s[i]);
        i++;
       }

       //if K is still left , remove  digit from stack
       while(!st.empty() && k>0){
        st.pop();
        k--;
       }

       //Take out elment from stack
       string ans="";

        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }

        //reverse
        reverse(ans.begin(),ans.end());

        //Remove leading zeros
        int j=0;
        while(j<ans.size() && ans[j]=='0'){
            j++;
        }

        ans=ans.substr(j);

        //Check ans=" " : If yes then return "0"

        return ans==""?"0":ans;
       
    }
};