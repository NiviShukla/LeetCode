class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.length();
        int maxi = -1;
        for (int i = 0; i < n; i++) {
            int digit = num[i] - '0';
            if (digit % 2 != 0) {
                maxi = i; // Store the index of the last odd digit found
            }
        }

        // If no odd digit found, return an empty string
        if (maxi == -1) {
            return "";
        }

        // Extract the largest odd number using the found index
        return num.substr(0, maxi + 1);
    }
};
