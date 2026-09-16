class Solution {
public:
    bool isAnagram(string s, string t) {
        // unordered_map<char, int> mp;
        
        if(s.length()!=t.length()) return false;

        // for(int i=0;i<s.length();i++){
        //     mp[s[i]]++;
        // }

        // for(int i=0;i<t.length();i++){
        //     if(mp.find(t[i])!=mp.end()){

        //         mp[t[i]]--;
                
        //     }

        //     else{
        //         return false;
        //     }
        // }

        // for(auto it:mp){
        //     if(it.second!=0){
        //         return false;
        //     }
        // }

        // return true;

        //2.Approach->TC O(n)
                    //SC O(26) approx O(1)
        vector<int> count(26,0);

        for(char &ch:s){
            count[ch-'a']++;
        }

        for(char &ch:t){
            count[ch-'a']--;
        }

        //check if all elements in count are zero
        //we can use for loop or lambda function

        bool allZeros=all_of(begin(count),end(count),[](int element){
            return element==0;
        });

        return allZeros;
    }
};