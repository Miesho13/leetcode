#include <iostream>
#include <vector>
#include <unordered_map>
#include <cstdio>
#include <unordered_set>
#include <functional>
#include <array>
#include <map>

class Solution {
public:

    std::string encode(std::vector<std::string>& strs) {
        std::string ret = "";
        for (auto str : strs) {
            ret += str; 
        }
        return ret;
    }

    std::vector<std::string> decode(std::string s) {
        return std::vector<std::string>();
    }
};


int main() {
    Solution solution;
    std::vector<std::string> input = {"Hello", "Data", "duude!"};
    
    auto output = solution.encode(input);
    std::cout << output << '\n';

    return 0;
}
