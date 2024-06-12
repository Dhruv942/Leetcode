class Solution {
public:
    int heightChecker(vector<int>& heights) {
          std::vector<int> expected = heights;
        std::sort(expected.begin(), expected.end());

        // Initialize a counter to count the number of mismatches
        int count = 0;

        // Compare each element in the original array with the sorted array
        for (size_t i = 0; i < heights.size(); ++i) {
            if (heights[i] != expected[i]) {
                count++;
            }
        }

        // Return the count of mismatches
        return count;
    }
    
};
