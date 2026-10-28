class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       
       int longest_length=0;

       unordered_map<char,int> mp;

       int left=0;

       for(int right=0;right<s.size();right++){

        if(mp.find(s[right]) == mp.end() || mp[s[right]]<left){
            longest_length=max(longest_length,right-left+1);
        }
        else{
            left=mp[s[right]]+1;
            
        }

        mp[s[right]]=right;
       }

       return longest_length;

       
    }
};