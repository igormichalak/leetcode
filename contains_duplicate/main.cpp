#include <iostream>
#include <vector>
#include <algorithm>

bool contains_duplicate(std::vector<int>& nums) {
    // std::unordered_set<int> numset(nums.begin(), nums.end());
    // return nums.size() > numset.size();

    int n = nums.size();
    std::sort(nums.begin(), nums.end());
    for (int i = 1; i < n; ++i) {
        if (nums[i] == nums[i - 1]) return true;
    }
    return false;
}

int main() {
    std::vector<int> nums = {1, 2, 2, 4, 5};
    std::cout << contains_duplicate(nums) << std::endl;
    return 0;
}
