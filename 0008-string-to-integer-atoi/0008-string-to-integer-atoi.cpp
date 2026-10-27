class Solution {
public:
    int myAtoi(string s) {
        int ans = 0;
        int sign = 1;
        int i = 0;
        int n = s.size();

        // 1. Skip leading whitespaces
        while (i < n && isspace(s[i])) {
            i++;
        }

        // 2. Read the sign, if present
        if (i < n && (s[i] == '-' || s[i] == '+')) {
            if (s[i] == '-') {
                sign = -1;
            }
            i++;
        }

        // 3. Convert digits into an integer
        while (i < n && isdigit(s[i])) {
            int digit = s[i] - '0';

            // 4. Check for overflow before multiplication
              if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && digit > 7)) {
       return (sign == 1) ? INT_MAX : INT_MIN;
   }

            ans = ans * 10 + digit;
            i++;
        }

        // 5. Apply the sign
        return ans * sign;
    }
};