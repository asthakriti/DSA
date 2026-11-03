class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       
      int longest=0;
      unordered_map<int,int> mp;
      int left=0;

      for(int right=0;right<s.size();right++){
        //valid
        if(mp.find(s[right])==mp.end() || mp[s[right]]<left){
            //present nhi hai OR present hai but left se idx piche hai
            longest=max(longest,right-left+1);
        }
        else{
            left=mp[s[right]]+1;
        }

        mp[s[right]]=right;
      }
return longest;
       
    }
};