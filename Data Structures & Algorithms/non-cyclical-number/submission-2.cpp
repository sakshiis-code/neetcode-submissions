class Solution {
   public:
    int helper(int n) {
        int output = 0;

        while (n > 0) {
            int digit = n % 10;
            output += digit * digit;
            n = n / 10;
        }

        return output;
    }

    bool isHappy(int n) {
        int slow = n, fast = helper(n);
        int power = 1, lam = 1;

        while (slow != fast) {
            if (power == lam) {
                slow = fast;
                power *= 2;
                lam = 0;
            }

            lam++;
            fast = helper(fast);
        }

        return fast == 1;
    }
};
