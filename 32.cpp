#include <iostream>
#include <vector>
#include <set>

int thirdMax(std::vector<int>& nums) {
    std::set<int> uniqueNums;

    for (int num : nums) {
        uniqueNums.insert(num);
        if (uniqueNums.size() > 3) {
            uniqueNums.erase(uniqueNums.begin());
        }
    }

    return uniqueNums.size() == 3 ? *uniqueNums.begin() : *uniqueNums.rbegin();
}

int main() {
    std::vector<int> nums = {3, 2, 1};
    int thirdMaxNum = thirdMax(nums);
    std::cout << "Third maximum number: " << thirdMaxNum << std::endl;

    return 0;
}
