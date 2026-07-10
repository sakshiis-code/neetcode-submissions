class Solution {
   public:
    int helper(int n) {
        int output = 0;
        while (n > 0) {
            int lastDigit = n % 10;
            output += lastDigit * lastDigit;
            n = n / 10;
        }

        return output;
    }

    bool isHappy(int n) {
        unordered_set<int> st;

        while (!st.count(n) && n != 1) {
            st.insert(n);
            n = helper(n);
        }

        return n == 1;
    }
};
