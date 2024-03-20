#include <iostream>
#include <vector>
#include <set>

// I need a hash table container with a add method. Whenerever number 
// cant be put in it shoud return a status.
class Solution {

public:
    bool containsDuplicate(std::vector<int>& nums) {
        std::set<int> hashMap;
        for (auto num : nums) {
            auto result = hashMap.insert(num);
            if (result.second == false) {
                return true;
            }
        }

        return false;
    }
};

int main() {
    Solution solution;

    std::vector<int> test_input_1 = {1,2,3,1};
    std::cout << (solution.containsDuplicate(test_input_1) ? "ture" : "false")
        << "\n";
    
    std::vector<int> test_input_2 = {1,2,3,4};
    std::cout << (solution.containsDuplicate(test_input_2) ? "ture" : "false")
        << "\n";

    return 0;
}
