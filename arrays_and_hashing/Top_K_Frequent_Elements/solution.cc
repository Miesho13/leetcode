#include <iostream>
#include <vector>
#include <unordered_map>
#include <cstdio>
#include <unordered_set>
#include <functional>
#include <array>
#include <map>

// I need a hash table container with a add method. Whenerever number 
// cant be put in it shoud return a status.
class Solution {

public:
    std::vector<int> topKFrequent(std::vector<int>& nums, int k) {    
        std::unordered_map<int, int> hash_table; 
        for (auto num : nums) {
            if (hash_table.find(num) == hash_table.end()) {
                hash_table[num] = 1;
            } else {
                hash_table[num]++;
            }
        }
        
        for (auto element : hash_table) {
            printf("[%d]: \"%d\"\n", element.first, element.second);
        }
        
        std::vector<int> buck_array[nums.size()]; 
        

        for (auto element : hash_table) {
            buck_array[element.second].push_back(element.first);
        }
        
        for (int i = 0; i < nums.size(); i++) {
            printf("[%d]: [ ", i);
            for (auto num : buck_array[i]) {
                printf("%d ", num);
            }
            printf("]\n");
        }
        
        std::vector<int> ret;
        int get_element = 0;
        for (int i = nums.size() - 1; i >= 0; i++) {
            if (buck_array[i].size() == 0) {
                continue;
            } else if (buck_array[i].size() == k) {
                return buck_array[i];
            } else {
                for (auto num : buck_array[i]) {
                    ret.push_back(num);
                    get_element++;
                    if ()
                }

            }
        }

        return std::vector<int>();
    }
};


int main() {
    Solution solution;

    std::vector<int> test_input_1 = {1,1,1,2,2,2,3};
    auto ret = solution.topKFrequent(test_input_1, 2);
     

    std::cout << '\n';
    return 0;
}
