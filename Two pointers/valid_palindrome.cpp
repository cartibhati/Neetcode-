class Solution {
public:
    bool isPalindrome(string nums) {
        int n = nums.size();
        int i = 0;
        int j = n - 1;

        while (i < j) {

            while (i < j && !isalnum(nums[i])) {
                i++;
            }

            while (i < j && !isalnum(nums[j])) {
                j--;
            }

            if (tolower(nums[i]) != tolower(nums[j])) {
                return false;
            }

            i++;
            j--;
        }

        return true;
    }
};