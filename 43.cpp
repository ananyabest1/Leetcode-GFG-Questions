#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int ans1 = nums[n-1] * nums[n-2] * nums[n-3];
        int ans2 = nums[0] * nums[1] * nums[n-1];
        return max(ans1, ans2);
    }
};

int main() {
    vector<int> nums = {4, 6, 3, 2, 8, 1, 9};
    Solution solution;
    int maxProduct = solution.maximumProduct(nums);
    cout << "The maximum product is: " << maxProduct << endl;

    return 0;
}
