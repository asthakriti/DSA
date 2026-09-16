class Solution {
public:
    bool isPalindrome(string s) {
        /*Using Two pointer approch.
        //n/2 cant used because there is also ohter character type.*/

        // int i=0;int j=s.length()-1;
        // while(i<j){
        //     while(i<j && !isalnum(s[i])){
        //         i++;
        //     }
        //     //Checking whether the current i is char or not from backside
        //     while(i<j && !isalnum(s[j])){
        //         j--;
        //     }
        //     if(tolower(s[i]) != tolower(s[j])){
        //         return false;
        //     }
        //     i++;
        //     j--;
        // }
        // return true;

        string res="";

        // for(char c:s){
        //     if(isalnum((unsigned char)c)){
        //         res+=tolower((unsigned char)c);
        //     }
        // }

        
    for (char c : s) {
        if (isalnum((unsigned char)c)) { // ✅ Correct cast
            res += tolower((unsigned char)c); // ✅ Same correct cast here
        }
    }

        //cout<<"string"<<res<<endl;

        int j=res.length()-1;
        int i=0;

        while(i<=j){
            if(res[i]!=res[j]){
                return false;
            }

            i++;
            j--;
        }

        return true;
    }
};