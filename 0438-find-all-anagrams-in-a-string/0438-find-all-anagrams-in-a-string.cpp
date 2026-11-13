class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int k=p.size();
        int n=s.size();

        vector<int> need(26,0), cur(26,0);

        for(auto ch:p){
            need[ch-'a']++;
        }

        vector<int> ans;



        int left=0;



        for(int right=0; right<n;right++){
            cur[s[right]-'a']++;

            if(right-left+1>k){
                cur[s[left]-'a']--;
                left++;
            }

            if(need==cur){
                ans.push_back(left);
            }

        }

        return ans;
    }
};