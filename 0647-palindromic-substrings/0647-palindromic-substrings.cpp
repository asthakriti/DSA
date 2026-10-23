class Solution {
public:
int count=0;

    void expand(int left, int right, string s){
        while(left>=0 && right<s.size() && s[left]==s[right]){
            count++;
            left--;right++;
        }
    }


    int countSubstrings(string s) {
        for(int i=0;i<s.size();i++){
            expand(i,i,s);
            expand(i,i+1,s);
        }
        return count;
    }
};