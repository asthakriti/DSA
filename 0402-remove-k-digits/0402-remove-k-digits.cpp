class Solution {
public:
    string removeKdigits(string s, int k) {

        stack<char> st;
        st.push(s[0]);
        int i=1;

        while(i<s.size()){
            while(k>0 && !st.empty() && st.top()>s[i]){
                st.pop();k--;
            }

            st.push(s[i]);
            i++;
        }

        while(k>0 && !st.empty()){
            st.pop();k--;
        }

        string ans="";

        while (!st.empty()) {
            ans+=st.top();
            st.pop();
        }


        reverse(ans.begin(), ans.end());

        int j=0;
        while(j<ans.size() && ans[j]=='0'){
            j++;
        }

        ans=ans.substr(j);

       
        

       
        return ans==""?"0":ans;
       
    }
};