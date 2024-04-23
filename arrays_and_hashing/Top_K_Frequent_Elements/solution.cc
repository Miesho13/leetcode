#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <functional>
#include <array>
#include <map>

// I need a hash table container with a add method. Whenerever number 
// cant be put in it shoud return a status.
class Solution {

public:
    std::vector<int> topKFrequent(std::vector<int>& nums, int k) { 
        std::unordered_map<int, int> counter;
        for (auto num : nums) {
            counter[num]++;
        }

        std::vector<std::pair<int, int>> sorted(counter.begin(), counter.end());
        sort(
            sorted.begin(), 
            sorted.end(), 
            [](const std::pair<int, int>& a, const std::pair<int, int>& b) {
                return a.second > b.second;
            }
        );


        std::vector<int> result;
        for (int i = 0; i < k && i < sorted.size(); ++i) {
            result.push_back(sorted[i].first);
        }

        return result; 

    }
};


int main() {
    Solution solution;

    std::vector<int> test_input_1 = {1,1,1,2,2,3};
    auto ret = solution.topKFrequent(test_input_1, 2);
    
    for (auto num : ret) {
        std::cout << num << " ";
    }
    
    std::cout << '\n';
    return 0;
}
