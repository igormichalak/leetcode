#include <iostream>
#include <vector>
#include <unordered_map>

using std::size_t;

std::vector<int> two_sum(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> snd_num_map;

    for (int i = 0; i < nums.size(); ++i) {
        auto it = snd_num_map.find(nums[i]);

        if (it != snd_num_map.end()) {
            return {it->second, i};
        }

        int snd_num = target - nums[i];
        snd_num_map[snd_num] = i;
    }

    return {-1, -1};
}

int main() {
    std::cout << "output" << std::endl;
    return 0;
}
