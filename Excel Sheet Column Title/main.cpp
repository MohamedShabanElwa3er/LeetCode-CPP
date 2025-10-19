class Solution {
public:
      std::string convertToTitle(int columnNumber) {
        std::string result = "";

        while (columnNumber > 0) {
            columnNumber--;  // adjust for 1-based indexing
            char c = 'A' + (columnNumber % 26);
            result+=c;
            columnNumber /= 26;
        }

        std::reverse(result.begin(), result.end());
        return result;
    }
};
