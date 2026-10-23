class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int minLength=INT_MAX;

        for(auto str:strs){
            int len=str.size();
            minLength=min(minLength,len);
        }

        string ans="";

        for(int i=0;i<minLength;i++){
            for(int j=0;j<strs.size()-1;j++){
                if(strs[j][i]!=strs[j+1][i]){
                    return ans;
                }
            }
            ans+=strs[0][i];
        }
        return ans;
    }
};