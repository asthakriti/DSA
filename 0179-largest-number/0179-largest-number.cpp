class Solution {
public:
    string largestNumber(vector<int>& nums) {
        
        vector<string> ch;

        for(auto num:nums){
            ch.push_back(to_string(num));
        }

        sort(ch.begin(),ch.end(), [](string a,string b){
            return a+b>b+a;
        });

        string ans="";

        for(auto it:ch){
            ans+=it;
        }

        int j=0;
        while(j<ans.size() && ans[j]=='0'){
            j++;
        }

        ans=ans.substr(j);

        

        return ans==""?"0":ans;
    }
};