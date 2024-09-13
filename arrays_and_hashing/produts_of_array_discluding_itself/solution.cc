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
    std::vector<int> productExceptSelf(std::vector<int>& nums) {
        std::vector<int> ret;
        int product = 1;
        for (auto num : nums) {
            product *= num;
        }

        int prefix = 0;
        int profix = 0;

        for (int i = 0; i < nums.size(); i++) { 
              
        }

    }
};


int main() {
    Solution solution;
    std::vector<int> nums = {1, 2, 4, 6};
    solution.productExceptSelf(nums);

    return 0;
}
