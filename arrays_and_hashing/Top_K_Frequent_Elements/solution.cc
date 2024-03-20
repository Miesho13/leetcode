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
        std::unordered_set<int> hashmap;
        std::vector<std::vector> vec(k);
        for (auto n : nums) {
            if (hashmap.find(n) == hashmap.end()) {
                hashmap.insert(n);
                
            }
        }
    


        
    
        
         

    }
};

void print_group(std::vector<std::vector<std::string>> set) {
    std::cout << "["; 
    for (auto subset : set) {
        std::cout << "[";
        for (auto str : subset) {
            std::cout << str << " ";
        }
        std::cout << "]," ;
    }
    std::cout << '\n';
}

int main() {
    Solution solution;

    std::vector<int> test_input_1 = {1,1,1,2,2,3};
    solution.topKFrequent(test_input_1, 2);

    return 0;
}
