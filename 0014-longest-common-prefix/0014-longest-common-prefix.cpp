class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        int minlength=INT_MAX;

        int n =strs.size();
        for(int i=0;i<n;i++){
            int len= strs[i].size();
            minlength=min(minlength,len);
        }

        string ans="";


        for(int i=0;i<minlength;i++){
            for(int j=1;j<n;j++){
                if(strs[0][i] != strs[j][i]){
                    return ans;
                    
                }

                


            }ans +=strs[0][i];
        }

        return ans;
         
    }
};