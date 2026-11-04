class Solution {
public:
    string removeKdigits(string s, int k) {

       stack<char>st;

       st.push(s[0]);
       int i=1;

       while(i<s.size()){

        cout<<"oiuhgytfdr"<<endl;

        while(!st.empty() && st.top()>s[i] && k>0){
            st.pop();
            cout<<"oiuhjihugytgytfdr"<<endl;
            k--;

        }

        st.push(s[i]);
        i++;

       }

       while(!st.empty() && k>0){
        st.pop();
        k--;
       }

       string ans="";

       while(!st.empty()){
        ans+=st.top();
        st.pop();
       }

       cout<<"jhiguku"<<ans<<endl;

       reverse(ans.begin(),ans.end());

              cout<<"jhiguvfdscdku"<<ans<<endl;


       int j=0;
       while(j<ans.size()&& ans[j]=='0'){
        j++;
       }

       ans=ans.substr(j);

       return ans==""?"0":ans;
       
    }
};