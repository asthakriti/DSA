class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        string ans="";

        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }

        vector<pair<char,int>> vec(mp.begin(),mp.end());

        sort(vec.begin(),vec.end(), [](auto a, auto b){
            return a.second>b.second;
        });

        for(auto it:vec){
            char key=it.first;
            int val=it.second;

            for(int j=0;j<val;j++){
                ans += key;
            }
        }

       
        return ans;
    }
};