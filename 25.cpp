#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> summaryRanges(const std::vector<int>& nums) {
    std::vector<std::string> result;
    
    if (nums.empty())
        return result;
    
    int start = nums[0]; // Initialize the start of the range
    int end = nums[0];   // Initialize the end of the range
    
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] == end + 1) {
            end = nums[i]; // Extend the range
        } else {
            // Add the current range to the result
            if (start == end)
                result.push_back(std::to_string(start));
            else
                result.push_back(std::to_string(start) + "->" + std::to_string(end));
            
            start = nums[i]; // Start a new range
            end = nums[i];
        }
    }
    
    // Add the last range to the result
    if (start == end)
        result.push_back(std::to_string(start));
    else
        result.push_back(std::to_string(start) + "->" + std::to_string(end));
    
    return result;
}

int main() {
    std::vector<int> nums = {0, 1, 2, 4, 5, 7};
    std::vector<std::string> ranges = summaryRanges(nums);
    
    // Print the summary ranges
    for (const auto& range : ranges) {
        std::cout << range << std::endl;
    }
    
    return 0;
}