class Solution {
public:

    int start_idx=0;
    int maxLength=INT_MIN;
    string ans="";

    void expand(int left, int right, string s){
        while(left>=0 && right<s.size() && s[left]==s[right]){
            if((right-left+1)>maxLength){
                start_idx=left;
                maxLength=right-left+1;
                ans=s.substr(start_idx,maxLength);
                
            }
            left--; right++;
        }
    }
    string longestPalindrome(string s) {
         for(int i=0;i<s.size();i++){
            expand(i,i,s);
            expand(i,i+1,s);
         }
         return ans;
    }
};