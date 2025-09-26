#include <iostream>
#include <string>

using std::size_t;

bool is_anagram(std::string s, std::string t) {
    // std::unordered_map<char, int> cmap;
    // for (char c : s) {
    //     cmap[c]++;
    // }
    // for (char c : t) {
    //     cmap[c]--;
    // }
    // for (const auto& [k, v] : cmap) {
    //     if (v < 0 || v > 0) return false;
    // }
    // return true;

    if (s.length() != t.length()) return false;

    std::array<int, 26> counts;
    for (size_t i = 0; i < s.length(); ++i) {
        counts[s[i] - 'a']++;
        counts[t[i] - 'a']--;
    }
    for (const int& c : counts) {
        if (c != 0) return false;
    }
    return true;
}

int main() {
    std::cout << "output" << std::endl;
    return 0;
}
