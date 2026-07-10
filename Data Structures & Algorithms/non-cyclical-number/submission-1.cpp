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

        while (slow != fast) {
            slow = helper(slow);
            fast = helper(fast);
            fast = helper(fast);
        }

        return fast == 1;
    }
};
