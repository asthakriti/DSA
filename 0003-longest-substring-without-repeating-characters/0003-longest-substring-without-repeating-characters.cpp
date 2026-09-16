class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> m;
        int i = 0;
        int maxi = 0;


        for(int j = 0; j < s.size(); j++){
            if(m.find(s[j]) != m.end() && m[s[j]] >= i){
                i = m[s[j]]+1;
                

               
            }

            else{
                
                maxi = max(j-i+1, maxi);
               
            }

            m[s[j]] = j;
        } 
        return maxi;
    }
};