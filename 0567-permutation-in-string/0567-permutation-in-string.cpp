class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        int k=s1.size();
        int n=s2.size();

        vector<int> need(26,0), win(26,0);

        for(char c: s1) {
            need[c-'a']++;
        }

        int left=0;

        for(int right=0; right<n; right++){

            //add this s[right] to the window

            win[s2[right]-'a']++;

            //check the size of window
            if(right-left+1 > k){
                win[s2[left]-'a']--;
                left++;
            }

            if(win==need){
                return true;
            }
        }

        return false;
    }
};    