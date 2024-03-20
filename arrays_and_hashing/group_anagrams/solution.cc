#include <iostream>
#include <vector>
#include <unordered_map>
#include <functional>
#include <array>
#include <map>

// I need a hash table container with a add method. Whenerever number 
// cant be put in it shoud return a status.
class Solution {

public:
    std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs) {
        std::map <std::string, std::vector<std::string>> hashMap;
        
        for (auto str : strs) {
            std::string tmp = str;
            sort(tmp.begin(), tmp.end());
            hashMap[tmp].push_back(str);
        }

        std::vector<std::vector<std::string>> ret_vec;

        for (auto it = hashMap.begin(); it != hashMap.end(); it++) {
            ret_vec.push_back(it->second);
        }

        
        return ret_vec;
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

    std::vector<std::string> test_input_1 = {
        "eat", "tea", "tan", 
        "ate", "nat", "bat"
    };
    print_group(solution.groupAnagrams(test_input_1));


    std::vector<std::string> test_input_2 = {""};
    print_group(solution.groupAnagrams(test_input_2));

    std::vector<std::string> test_input_3 = {"a"};
    print_group(solution.groupAnagrams(test_input_3));
    return 0;
}
