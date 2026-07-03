class Solution {
   public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.length() - 1;

        while (left < right) {
            // Skip invalid characters from left
            while (left < right && !isalnum(s[left])) {
                left++;
            }

            // Skip invalid characters from right
            while (right > left && !isalnum(s[right])) {
                right--;
            }

            // Compare after converting to lowercase
            if (tolower(s[left]) != tolower(s[right])) {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
};
