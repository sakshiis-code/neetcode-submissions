class Solution {
   public:
    bool isPalindrome(string s) {
        string temp = "";
        for (char c : s) {
            if (isalnum(c)) {
                temp += tolower(c);
            }
        }

        string copy = temp;
        reverse(copy.begin(), copy.end());

        return temp == copy;
    }
};
